# Created by: Alexander Logvinov <avl@FreeBSD.org>
# $FreeBSD: head/net/remmina-plugin-rdp/Makefile 473049 2018-06-22 17:18:45Z danilo $

PKGNAMESUFFIX=	-rdp
PORTREVISION=	3

COMMENT=	Remmina plugin for RDP protocol

LIB_DEPENDS=	libfreerdp2.so:net/freerdp

USE_GNOME+=	cairo
USE_XORG+=	ice sm x11 xext

MASTERDIR=	${.CURDIR}/../remmina-plugins

.include "${MASTERDIR}/Makefile"
