# Created by: olevole@olevole.ru
# $FreeBSD$

PORTNAME=	spice-gtk
PORTVERSION=	0.36
PORTREVISION=	1
CATEGORIES?=	deskutils gnome
MASTER_SITES=	http://www.spice-space.org/download/gtk/

MAINTAINER=	xxjack12xx@gmail.com
COMMENT=	Gtk client and libraries for SPICE remote desktop servers

LICENSE=	GPLv2

NOT_FOR_ARCHS=		powerpc powerpc64 powerpcspe sparc64
NOT_FOR_ARCHS_REASON=	server only supports little-endian

LIB_DEPENDS=	libepoxy.so:graphics/libepoxy \
		libgstreamer-1.0.so:multimedia/gstreamer1 \
		libjson-glib-1.0.so:devel/json-glib \
		libopus.so:audio/opus \
		libva-x11.so:multimedia/libva
BUILD_DEPENDS=	spice-protocol>=0.12.15:devel/spice-protocol \
		${PYTHON_PKGNAMEPREFIX}pyparsing>=2.0.1:devel/py-pyparsing@${PY_FLAVOR}
RUN_DEPENDS=	spice-protocol>=0.12.15:devel/spice-protocol

USES=		autoreconf cpe gettext-tools gmake gnome jpeg libtool pkgconfig tar:bzip2 \
		python ssl localbase:ldflags
USE_XORG=	x11 pixman
USE_GNOME=	cairo gdkpixbuf2 gnomeprefix gtk30 intltool introspection:build

CPE_VENDOR=	redhat

SPICE_SSL_CFLAGS=	-I${OPENSSLINC}
SPICE_SSL_LIBS=	-L${OPENSSLLIB} -lcrypto -lssl
CONFIGURE_ENV+=	SSL_CFLAGS="${SPICE_SSL_CFLAGS}" SSL_LIBS="${SPICE_SSL_LIBS}" \
		OPENSSL_CFLAGS="${SPICE_SSL_CFLAGS}" OPENSSL_LIBS="${SPICE_SSL_LIBS}"

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

# we can't use pathfix with USES=autoreconf
MAKE_ARGS=	pkgconfigdir="${PREFIX}/libdata/pkgconfig"

INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=	BUILTIN-MJPEG LZ4 DOCS INTROSPECTION NLS PIE POLKIT PULSEAUDIO SASL
OPTIONS_DEFAULT=	BUILTIN-MJPEG LZ4 INTROSPECTION PIE POLKIT PULSEAUDIO SASL
OPTIONS_SUB=	yes

LZ4_CONFIGURE_ENABLE=	lz4=yes
LZ4_LIB_DEPENDS+=	liblz4.so:archivers/liblz4

NLS_USES=	gettext
NLS_CONFIGURE_ENABLE=	nls

BUILTIN-MJPEG_CONFIGURE_ENABLE=	builtin-mjpeg
BUILTIN-MJPEG_DESC=	Enable the builtin mjpeg video decoder

INTROSPECTION_CONFIGURE_ENABLE=	introspection=yes
INTROSPECTION_DESC=	Enable introspection for this build

PIE_CONFIGURE_ENABLE=	pie=yes
PIE_DESC=	Enable position-independent-executable support (for usb acl helper)

POLKIT_CONFIGURE_ENABLE=	polkit=yes
POLKIT_DESC=	Enable PolicyKit support (for usb acl helper)

PULSEAUDIO_CONFIGURE_ENABLE=	pulse=yes
PULSEAUDIO_LIB_DEPENDS=		libpulse.so:audio/pulseaudio

SASL_CONFIGURE_WITH=		sasl=yes
SASL_LIB_DEPENDS=		libsasl2.so:security/cyrus-sasl2

.include <bsd.port.mk>
