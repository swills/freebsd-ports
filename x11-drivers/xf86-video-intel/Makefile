# Created by: lesi@FreeBSD.org
# $FreeBSD$

PORTNAME=	xf86-video-intel
DISTVERSION=	2.99.917-863
DISTVERSIONSUFFIX=	-g6afed33b
PORTEPOCH=	1
CATEGORIES=	x11-drivers
MASTER_SITES=	http://cgit.freedesktop.org/xorg/${XORG_CAT}/${PORTNAME}/snapshot/

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X.Org legacy driver for Intel integrated graphics chipsets

LICENSE=	MIT	# various
LICENSE_FILE=	${WRKSRC}/COPYING

ONLY_FOR_ARCHS=	amd64 i386
ONLY_FOR_ARCHS_REASON=	Only Intel integrated GPUs on x86 are supported

LIB_DEPENDS=	libxcb-util.so:x11/xcb-util \
		libdrm_intel.so:graphics/libdrm

USES=		autoreconf cpe gl localbase
USE_GL=		gl
USE_XORG=	pciaccess pixman x11 xcb xext xrender xv xvmc
USE_LDCONFIG=	yes
CPE_VENDOR=	x
XORG_CAT=	driver
CONFIGURE_ARGS=	--with-builderstring="${DISTVERSIONFULL}"
TEST_TARGET=	check

# XXX bug 214593: SNA crashes on pre-SandyBridge hardware
CONFIGURE_ARGS+=--with-default-accel=uxa
# XXX Remove after FreeBSD 11 EOL
CPPFLAGS+=	-D_WITH_GETLINE

OPTIONS_DEFINE=	UDEV
OPTIONS_DEFAULT=UDEV

UDEV_DESC=		udev-based monitor hotplug detection
UDEV_LIB_DEPENDS=	libudev.so:devel/libudev-devd
UDEV_CONFIGURE_ENABLE=	udev

post-patch:
.if ${CONFIGURE_ARGS:M--with-default-accel=uxa}
	@${REINPLACE_CMD} '/^Default/s/SNA/UXA/' ${WRKSRC}/man/intel.man
.endif

.include <bsd.port.mk>
