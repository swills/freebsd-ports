# $FreeBSD: head/graphics/waylandpp/Makefile 482189 2018-10-15 23:59:23Z jbeich $

PORTNAME=	waylandpp
DISTVERSION=	0.2.3
PORTREVISION=	1
CATEGORIES=	graphics

MAINTAINER=	tobik@FreeBSD.org
COMMENT=	Wayland C++ bindings

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libwayland-egl.so:graphics/wayland

USES=		cmake:outsource localbase pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	NilsBrause
USE_GL=		egl

CMAKE_OFF=	BUILD_DOCUMENTATION BUILD_EXAMPLES

.include <bsd.port.mk>
