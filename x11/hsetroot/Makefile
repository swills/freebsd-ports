# Created by: Vincent Tantardini <vinc@freebsd-fr.org>
# $FreeBSD: head/x11/hsetroot/Makefile 457462 2017-12-28 14:30:23Z danfe $

PORTNAME=	hsetroot
PORTVERSION=	1.0.2
PORTREVISION=	13
CATEGORIES=	x11

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Wallpaper manipulation utility for X11

LICENSE=	GPLv2

LIB_DEPENDS=	libImlib2.so:graphics/imlib2

USE_GITHUB=	yes
GH_ACCOUNT=	himdel
GH_TAGNAME=	47d887b

USES=		pkgconfig
USE_XORG=	x11

PLIST_FILES=	bin/hsetroot
PORTDOCS=	README.md

OPTIONS_DEFINE=	DOCS

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/*.md ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
