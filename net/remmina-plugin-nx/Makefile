# Created by: Koichiro IWAO <meta+ports@vmeta.jp>
# $FreeBSD: head/net/remmina-plugin-nx/Makefile 463551 2018-03-04 05:21:09Z woodsb02 $

PKGNAMESUFFIX=	-nx

COMMENT=	Remmina plugin for NX

USE_GNOME+=	cairo
USE_XORG+=	x11 xkbfile

MASTERDIR=	${.CURDIR}/../remmina-plugins

LIB_DEPENDS+=	libssh_threads.so:security/libssh

.include "${MASTERDIR}/Makefile"
