# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD$

PORTNAME=	gtk-vnc
PORTVERSION=	1.0.0
CATEGORIES=	net gnome
MASTER_SITES=	GNOME

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	VNC viewer widget for GTK+

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING.LIB

BUILD_DEPENDS=	vapigen:lang/vala
LIB_DEPENDS=	libgnutls.so:security/gnutls \
		libgcrypt.so:security/libgcrypt \
		libgpg-error.so:security/libgpg-error \
		libsasl2.so:security/cyrus-sasl2

USES=		gettext gnome libtool localbase meson pathfix pkgconfig \
		python tar:xz xorg
USE_GNOME=	cairo gdkpixbuf2 gtk30 intltool introspection:build
USE_XORG=	x11

OPTIONS_DEFINE=	PULSEAUDIO
OPTIONS_DEFAULT=PULSEAUDIO
OPTIONS_SUB=	yes

PULSEAUDIO_DESC=	use PulseAudio for audio playback
PULSEAUDIO_LIB_DEPENDS=	libpulse.so:audio/pulseaudio
PULSEAUDIO_MESON_TRUE=	pulseaudio

.include <bsd.port.mk>
