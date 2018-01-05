# Created by: Alexander Logvinov <avl@FreeBSD.org>
# $FreeBSD: head/net/remmina-plugin-rdp/Makefile 458053 2018-01-04 19:55:28Z cpm $

PKGNAMESUFFIX=	-rdp
PORTREVISION=	1

COMMENT=	Remmina plugin for RDP protocol

LIB_DEPENDS=	libfreerdp2.so:net/freerdp

USE_GNOME+=	cairo
USE_XORG+=	ice sm x11 xext

MASTERDIR=	${.CURDIR}/../remmina-plugins

PLIST_SUB+=	ICONS="" SSH=""

.include "${MASTERDIR}/Makefile"
