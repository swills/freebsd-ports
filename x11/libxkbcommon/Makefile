# $FreeBSD$

PORTNAME=	libxkbcommon
PORTVERSION=	0.9.1
CATEGORIES=	x11
MASTER_SITES=	https://xkbcommon.org/download/
DIST_SUBDIR=	xorg/lib

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Keymap handling library for toolkits and window systems

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	xkeyboard-config>0:x11/xkeyboard-config

USES=		bison meson pkgconfig tar:xz xorg
USE_XORG=	xcb
MESON_ARGS=	-Denable-docs=false -Ddefault-rules=xorg \
		-Dx-locale-root="${PREFIX}/lib/X11/locale" \
		-Denable-wayland=false

.include <bsd.port.mk>
