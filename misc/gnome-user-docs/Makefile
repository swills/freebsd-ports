# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD: head/misc/gnome-user-docs/Makefile 480951 2018-09-30 11:58:29Z kwm $

PORTNAME=	gnome-user-docs
PORTVERSION=	3.28.2
CATEGORIES=	misc gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome3

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	GNOME 3 users guide

LICENSE=	CC-BY-3.0
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	itstool:textproc/itstool

PORTSCOUT=	limitw:1,even

GNU_CONFIGURE=	yes
NO_ARCH=	yes
USES=		gettext-tools gmake gnome pathfix tar:xz
USE_GNOME=	libxml2:build

.include <bsd.port.mk>
