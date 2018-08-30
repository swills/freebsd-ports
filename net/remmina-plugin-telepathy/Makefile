# Created by: Alexander Logvinov <avl@FreeBSD.org>
# $FreeBSD: head/net/remmina-plugin-telepathy/Makefile 478203 2018-08-27 13:05:13Z woodsb02 $

PKGNAMESUFFIX=	-telepathy

COMMENT=	Remmina plugin for Telepathy support

USE_GNOME+=	cairo gtk30
LIB_DEPENDS=	libdbus-1.so:devel/dbus \
		libdbus-glib-1.so:devel/dbus-glib \
		libtelepathy-glib.so:net-im/telepathy-glib

MASTERDIR=	${.CURDIR}/../remmina-plugins

.include "${MASTERDIR}/Makefile"
