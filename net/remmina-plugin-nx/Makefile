# Created by: Koichiro IWAO <meta+ports@vmeta.jp>
# $FreeBSD: head/net/remmina-plugin-nx/Makefile 483100 2018-10-27 02:27:20Z woodsb02 $

PORTREVISION=	1
PKGNAMESUFFIX=	-nx

COMMENT=	Remmina plugin for NX

USE_GNOME+=	cairo
USE_XORG+=	x11 xkbfile

MASTERDIR=	${.CURDIR}/../remmina-plugins

LIB_DEPENDS+=	libssh.so:security/libssh

.include "${MASTERDIR}/Makefile"
