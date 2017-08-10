# Created by: Alexander Logvinov <avl@FreeBSD.org>
# $FreeBSD: head/net/remmina-plugin-rdp/Makefile 447436 2017-08-06 00:31:24Z woodsb02 $

PKGNAMESUFFIX=	-rdp
PORTREVISION=	1

COMMENT=	Remmina plugin for RDP protocol

LIB_DEPENDS=	libfreerdp2.so:net/freerdp

USE_GNOME+=	cairo
USE_XORG+=	ice sm x11 xext

MASTERDIR=	${.CURDIR}/../remmina-plugins

PLIST_SUB+=	ICONS="" SSH=""

.include "${MASTERDIR}/Makefile"
