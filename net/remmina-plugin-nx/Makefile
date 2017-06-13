# Created by: Koichiro IWAO <meta+ports@vmeta.jp>
# $FreeBSD: head/net/remmina-plugin-nx/Makefile 425739 2016-11-08 13:35:36Z woodsb02 $

PKGNAMESUFFIX=	-nx

COMMENT=	Remmina plugin for NX

USE_GNOME+=	cairo
USE_XORG+=	x11 xkbfile

MASTERDIR=	${.CURDIR}/../remmina-plugins

LIB_DEPENDS+=	libssh_threads.so:security/libssh

PLIST_SUB+=	ICONS="" SSH="@comment "

.include "${MASTERDIR}/Makefile"
