# Created by: FreeBSD GNOME Team <gnome@freebsd.org>
# $FreeBSD$

PORTNAME=	consolekit
PORTVERSION=	1.2.2
CATEGORIES=	sysutils gnome
PKGNAMESUFFIX=	2

MAINTAINER=	desktop@FreeBSD.org
COMMENT=	Framework for defining and tracking users

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libdbus-1.so:devel/dbus

OPTIONS_DEFINE=	POLKIT
OPTIONS_DEFAULT=POLKIT
OPTIONS_SUB=	yes

POLKIT_DESC=	Build with Polkit support

POLKIT_LIB_DEPENDS=	libpolkit-gobject-1.so:sysutils/polkit
POLKIT_CONFIGURE_ENABLE=	polkit

USE_GITHUB=	yes
GH_ACCOUNT=	ConsoleKit2
GH_PROJECT=	ConsoleKit2
GH_TAGNAME=	51c11c1

USES=		autoreconf gettext gmake gnome libtool localbase pathfix \
		pkgconfig tar:bzip2 xorg
USE_CSTD=	gnu99
USE_XORG=	x11
USE_GNOME=	glib20 libxslt introspection:build
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CONFIGURE_ARGS=	--with-pid-file=/var/run/${PORTNAME}.pid \
		--enable-pam-module \
		--with-pam-module-dir=${PREFIX}/lib \
		--localstatedir=/var \
		--enable-introspection \
		--without-html-dir \
		--disable-udev-acl \
		--disable-libcgmanager \
		--disable-libdrm \
		--disable-libevdev \
		--disable-libudev \
		--without-systemdsystemunitdir \
		--disable-gtk-doc
INSTALL_TARGET=	install-strip

post-install:
.for script in ck-system-hibernate ck-system-hybridsleep \
	ck-system-restart ck-system-stop ck-system-suspend
	cd ${STAGEDIR}${PREFIX}/lib/ConsoleKit/scripts && \
		${MV} ${script} ${script}.sample
.endfor

.include <bsd.port.mk>
