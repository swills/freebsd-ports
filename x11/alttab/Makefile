# Created by: Dmitri Goutnik <dg@syrec.org>
# $FreeBSD: head/x11/alttab/Makefile 463466 2018-03-03 07:31:45Z yuri $

PORTNAME=	alttab
DISTVERSIONPREFIX=	v
DISTVERSION=	1.2.0
CATEGORIES=	x11

MAINTAINER=	dg@syrec.org
COMMENT=	Task switcher for minimalistic window managers

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${LOCALBASE}/include/uthash.h:devel/uthash
LIB_DEPENDS=	libpng.so:graphics/png

USES=		pkgconfig
USE_XORG=	x11 xft xrender
GNU_CONFIGURE=	yes
CFLAGS+=	-I${LOCALBASE}/include
USE_GITHUB=	yes
GH_ACCOUNT=	sagb

PLIST_FILES=	bin/alttab \
		man/man1/alttab.1.gz

PORTDOCS=	README \
		alttab.ad \
		wm-setup.md

.include <bsd.port.mk>
