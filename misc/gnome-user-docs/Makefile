# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD: head/misc/gnome-user-docs/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	gnome-user-docs
PORTVERSION=	3.18.1
CATEGORIES=	misc gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome3

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	GNOME 3 users guide

BUILD_DEPENDS=	itstool:textproc/itstool

PORTSCOUT=	limitw:1,even

GNU_CONFIGURE=	yes
USES=		gettext-tools gmake gnome pathfix tar:xz
USE_GNOME=	libxml2:build

.include <bsd.port.mk>
