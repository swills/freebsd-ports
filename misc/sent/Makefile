# $FreeBSD: head/misc/sent/Makefile 418767 2016-07-19 11:04:13Z mat $

PORTNAME=	sent
PORTVERSION=	0.2
CATEGORIES=	misc
MASTER_SITES=	http://dl.suckless.org/tools/

MAINTAINER=	neel@neelc.org
COMMENT=	Simple plaintext presentation tool

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libpng.so:graphics/png\
		libfontconfig.so:x11-fonts/fontconfig

USE_XORG=	x11 xft

ALL_TARGET=	${PORTNAME}

PLIST_FILES=	bin/${PORTNAME} ${EXAMPLESDIR}/example ${EXAMPLESDIR}/nyan.png

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/sent ${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/example ${STAGEDIR}${EXAMPLESDIR}/example
	${INSTALL_DATA} ${WRKSRC}/nyan.png ${STAGEDIR}${EXAMPLESDIR}/nyan.png

.include <bsd.port.mk>
