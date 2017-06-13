# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: head/audio/xmms-festalon/Makefile 419816 2016-08-08 11:11:16Z ehaupt $

PKGNAMEPREFIX=	xmms-

COMMENT=	XMMS plugin for playing .nsf and .hes audio files

MASTERDIR=	${.CURDIR}/../festalon

BUILD_DEPENDS=	xmms:multimedia/xmms
RUN_DEPENDS=	xmms:multimedia/xmms

USES+=		gettext-runtime
USE_GNOME=	glib12 gtk12
USE_XORG=	xext xi x11
CONFIGURE_ARGS+=	--enable-interface=interface
INSTALL_TARGET=	install-strip

DESCR=		${.CURDIR}/pkg-descr
PLIST=		${.CURDIR}/pkg-plist

PLIST_FILES=	lib/xmms/Input/libfestalon_xmms.a \
		lib/xmms/Input/libfestalon_xmms.so \
		lib/xmms/Input/libfestalon_xmms.so.0 \
		lib/xmms/Input/libfestalon_xmms.so.0.0.0

.include "${MASTERDIR}/Makefile"
