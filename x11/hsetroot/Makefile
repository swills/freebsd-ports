# Created by: Vincent Tantardini <vinc@freebsd-fr.org>
# $FreeBSD: head/x11/hsetroot/Makefile 440860 2017-05-13 23:50:49Z linimon $

PORTNAME=	hsetroot
PORTVERSION=	1.0.2
PORTREVISION=	12
CATEGORIES=	x11

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Wallpaper manipulation utility for X11

LICENSE=	GPLv2

LIB_DEPENDS=	libImlib2.so:graphics/imlib2

BROKEN_powerpc64=	fails to compile: hsetroot.c: error: 'for' loop initial declaration used outside C99 mode

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
