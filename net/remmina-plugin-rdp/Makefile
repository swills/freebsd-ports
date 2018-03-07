# Created by: Alexander Logvinov <avl@FreeBSD.org>
# $FreeBSD: head/net/remmina-plugin-rdp/Makefile 463551 2018-03-04 05:21:09Z woodsb02 $

PKGNAMESUFFIX=	-rdp
PORTREVISION=	1

COMMENT=	Remmina plugin for RDP protocol

LIB_DEPENDS=	libfreerdp2.so:net/freerdp

USE_GNOME+=	cairo
USE_XORG+=	ice sm x11 xext

MASTERDIR=	${.CURDIR}/../remmina-plugins

.include "${MASTERDIR}/Makefile"
