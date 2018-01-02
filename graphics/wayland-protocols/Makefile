# $FreeBSD: head/graphics/wayland-protocols/Makefile 457191 2017-12-24 18:50:24Z swills $

PORTNAME=	wayland-protocols
PORTVERSION=	1.12
CATEGORIES=	graphics wayland
MASTER_SITES=	https://wayland.freedesktop.org/releases/

MAINTAINER=	kwm@FreeBSD.org
COMMENT=	Wayland protocols

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	wayland-scanner:graphics/wayland

USES=		tar:xz
NO_ARCH=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-noarch-pkgconfigdir='$${prefix}/libdata/pkgconfig'

.include <bsd.port.mk>
