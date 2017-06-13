# Created by: ijliao
# $FreeBSD: head/textproc/cwtext/Makefile 394666 2015-08-19 01:00:55Z db $

PORTNAME=	cwtext
PORTVERSION=	0.96
CATEGORIES=	textproc hamradio
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}%20${PORTVERSION}

MAINTAINER=	hamradio@FreeBSD.org
COMMENT=	Morse Code Generator

LICENSE=	GPLv2

USES=		gmake python
MAKEFILE=	makefile
ALL_TARGET=	ALL

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
