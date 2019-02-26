# $FreeBSD: head/graphics/waylandpp/Makefile 493837 2019-02-25 06:02:32Z tobik $

PORTNAME=	waylandpp
DISTVERSION=	0.2.5
CATEGORIES=	graphics

MAINTAINER=	tobik@FreeBSD.org
COMMENT=	Wayland C++ bindings

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libpugixml.so:textproc/pugixml \
		libwayland-egl.so:graphics/wayland

USES=		cmake compiler:c++11-lang gl localbase:ldflags pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	NilsBrause
USE_GL=		egl
USE_LDCONFIG=	yes

CMAKE_OFF=	BUILD_DOCUMENTATION BUILD_EXAMPLES

.include <bsd.port.mk>
