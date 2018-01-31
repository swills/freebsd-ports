# $FreeBSD: head/biology/slclust/Makefile 460452 2018-01-31 01:07:07Z jwb $

PORTNAME=	slclust
PORTVERSION=	2010.02.02
CATEGORIES=	biology
MASTER_SITES=	SF/slclust/slclust
DISTNAME=	${PORTNAME}_02022010

MAINTAINER=	jwb@FreeBSD.org
COMMENT=	Single-linkage clustering with Jaccard similarity

LICENSE=	ART10

WRKSRC=		${WRKDIR}/${PORTNAME}

PLIST_FILES=	bin/slclust

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/slclust ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
