# Created by: Koichiro IWAO <meta+ports@vmeta.jp>
# $FreeBSD: head/net/remmina-plugin-nx/Makefile 473049 2018-06-22 17:18:45Z danilo $

PORTREVISION=	1
PKGNAMESUFFIX=	-nx

COMMENT=	Remmina plugin for NX

USE_GNOME+=	cairo
USE_XORG+=	x11 xkbfile

MASTERDIR=	${.CURDIR}/../remmina-plugins

LIB_DEPENDS+=	libssh_threads.so:security/libssh

.include "${MASTERDIR}/Makefile"
