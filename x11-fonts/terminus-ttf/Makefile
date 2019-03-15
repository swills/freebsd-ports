# Created by: Tobias Kortkamp <t@tobik.me>
# $FreeBSD: head/x11-fonts/terminus-ttf/Makefile 495395 2019-03-11 21:25:57Z zeising $

PORTNAME=	terminus-ttf
PORTVERSION=	4.47.0
PORTREVISION=	1
CATEGORIES=	x11-fonts
MASTER_SITES=	http://files.ax86.net/terminus-ttf/files/${PORTVERSION}/

MAINTAINER=	tobik@FreeBSD.org
COMMENT=	Terminus Font - a clean fixed width font (TTF version)

LICENSE=	OFL11
LICENSE_FILE=	${WRKSRC}/COPYING

NO_ARCH=	yes
NO_BUILD=	yes
USE_XORG=	x11
USES=		fonts zip

FONTNAME=	TerminusTTF
SUB_FILES=	pkg-message
PLIST_SUB+=	PORTVERSION=${PORTVERSION}

do-install:
	${MKDIR} ${STAGEDIR}${FONTSDIR}/
	${INSTALL_DATA} ${WRKSRC}/*.ttf ${STAGEDIR}${FONTSDIR}/

.include <bsd.port.mk>
