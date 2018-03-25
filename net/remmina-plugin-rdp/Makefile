# Created by: Alexander Logvinov <avl@FreeBSD.org>
# $FreeBSD: head/net/remmina-plugin-rdp/Makefile 465177 2018-03-21 14:04:05Z kevans $

PKGNAMESUFFIX=	-rdp
PORTREVISION=	2

COMMENT=	Remmina plugin for RDP protocol

LIB_DEPENDS=	libfreerdp2.so:net/freerdp

USE_GNOME+=	cairo
USE_XORG+=	ice sm x11 xext

MASTERDIR=	${.CURDIR}/../remmina-plugins

.include "${MASTERDIR}/Makefile"
