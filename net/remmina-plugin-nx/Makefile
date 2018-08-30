# Created by: Koichiro IWAO <meta+ports@vmeta.jp>
# $FreeBSD: head/net/remmina-plugin-nx/Makefile 478203 2018-08-27 13:05:13Z woodsb02 $

PKGNAMESUFFIX=	-nx

COMMENT=	Remmina plugin for NX

USE_GNOME+=	cairo
USE_XORG+=	x11 xkbfile

MASTERDIR=	${.CURDIR}/../remmina-plugins

LIB_DEPENDS+=	libssh_threads.so:security/libssh

.include "${MASTERDIR}/Makefile"
