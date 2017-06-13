# Created by: Alexander Logvinov <avl@FreeBSD.org>
# $FreeBSD: head/net/remmina-plugin-telepathy/Makefile 425739 2016-11-08 13:35:36Z woodsb02 $

PKGNAMESUFFIX=	-telepathy

COMMENT=	Remmina plugin for Telepathy support

USE_GNOME+=	cairo gtk30
LIB_DEPENDS=	libtelepathy-glib.so:net-im/telepathy-glib

MASTERDIR=	${.CURDIR}/../remmina-plugins

PLIST_SUB+=	ICONS="@comment "

.include "${MASTERDIR}/Makefile"
