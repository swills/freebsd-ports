# Created by: Yukihiro Nakai <Nakai@Mlab.t.u-tokyo.ac.jp>
# $FreeBSD$

PORTNAME=	enlightenment
PORTVERSION=	0.23.1
PORTREVISION=	0
PORTEPOCH=	2
CATEGORIES=	x11-wm enlightenment
MASTER_SITES=	http://download.enlightenment.org/rel/apps/${PORTNAME}/
DIST_SUBDIR=	enlightenment

MAINTAINER=	enlightenment@FreeBSD.org
COMMENT=	Artistic X window manager

LICENSE=	BSD2CLAUSE

LIB_DEPENDS=	libefl.so:devel/efl \
		libxcb-keysyms.so:x11/xcb-util-keysyms

BROKEN_sparc64=		Does not install on sparc64: signal 10

USES=		alias compiler:c11 desktop-file-utils gettext-tools \
		iconv libtool meson pathfix pkgconfig tar:xz xorg
USE_XORG=	xcb
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip
SUB_FILES=	pkg-message

MESON_ARGS=	-Dsystemd=false -Dbluez5=false -Dbluez4=false \
		-Dmount-eeze=false -Deeze=false \
		-Ddevice-udev=false -Dlibmount=false
LDFLAGS+=	-L${LOCALBASE}/lib -lintl

.include "Makefile.plist"

OPTIONS_DEFINE=		NLS
OPTIONS_GROUP=		MIXER
OPTIONS_GROUP_MIXER=	ALSA PULSEAUDIO
OPTIONS_DEFAULT=	ALSA
OPTIONS_SUB=		yes

NLS_USES=		gettext-runtime

ALSA_LIB_DEPENDS=	libasound.so:audio/alsa-lib
PULSEAUDIO_LIB_DEPENDS=	libpulse.so:audio/pulseaudio
# why is setuid deactivated? "enlightenment_ckpasswd" i.e. does not work without setuid
#post-patch:
#	@${REINPLACE_CMD} -e \
#		's/\(setuid_root_mode = a=rx,u+x\)s/\1/g' \
#		${WRKSRC}/src/bin/Makefile.mk \
#		${WRKSRC}/src/modules/Makefile_cpufreq.mk
#
.include <bsd.port.mk>
