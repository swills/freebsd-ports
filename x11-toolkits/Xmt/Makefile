# $FreeBSD: head/x11-toolkits/Xmt/Makefile 431796 2017-01-18 13:20:31Z tijl $

PORTNAME=	Xmt
PORTVERSION=	4.0.0
CATEGORIES=	x11-toolkits
MASTER_SITES=	SF/motiftools/Xmt/Xmt400
DISTNAME=	xmt400

MAINTAINER=	cy@FreeBSD.org
COMMENT=	Xmt is a Motif Tools library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

WRKSRC=		${WRKDIR}/xmt400

USES=		motif imake tar:tgz
USE_LDCONFIG=	yes

post-patch:
	${TOUCH} ${WRKSRC}/clients/mockup.man

.include <bsd.port.mk>
