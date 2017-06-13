# $FreeBSD: head/x11-fonts/urwfonts/Makefile 418840 2016-07-20 15:33:20Z mat $

PORTNAME=	urwfonts
PORTVERSION=	1.0
PORTREVISION=	7
CATEGORIES=	x11-fonts
MASTER_SITES=	ftp://ftp.gimp.org/pub/gimp/fonts/
DISTNAME=	urw-fonts

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Another font package for X

WRKSRC=		${WRKDIR}/URW
NO_BUILD=	yes
USES=		fonts

SUB_FILES=	pkg-message

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
.for FILE in Fontmap
	${INSTALL_DATA} ${WRKSRC}/${FILE} ${STAGEDIR}${FONTSDIR}
.endfor
	${INSTALL_DATA} ${WRKSRC}/*.pfb ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/*.afm ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/*.pfm ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
