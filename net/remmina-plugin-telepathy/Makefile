# Created by: Alexander Logvinov <avl@FreeBSD.org>
# $FreeBSD: head/net/remmina-plugin-telepathy/Makefile 473049 2018-06-22 17:18:45Z danilo $

PORTREVISION=	1
PKGNAMESUFFIX=	-telepathy

COMMENT=	Remmina plugin for Telepathy support

USE_GNOME+=	cairo gtk30
LIB_DEPENDS=	libtelepathy-glib.so:net-im/telepathy-glib

MASTERDIR=	${.CURDIR}/../remmina-plugins

.include "${MASTERDIR}/Makefile"
