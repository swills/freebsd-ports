# Created by: Alexander Logvinov <avl@FreeBSD.org>
# $FreeBSD: head/net/remmina-plugin-xdmcp/Makefile 425739 2016-11-08 13:35:36Z woodsb02 $

PKGNAMESUFFIX=	-xdmcp

COMMENT=	Remmina plugin for XDMCP protocol

RUN_DEPENDS=	Xephyr:x11-servers/xephyr

USE_GNOME+=	cairo

MASTERDIR=	${.CURDIR}/../remmina-plugins

PLIST_SUB+=	ICONS="" SSH=""

.include "${MASTERDIR}/Makefile"
