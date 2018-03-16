# $FreeBSD: head/x11/radare-cutter/Makefile 463925 2018-03-09 01:03:45Z yuri $

PORTNAME=	radare-cutter
PORTVERSION=	1.1
DISTVERSIONPREFIX=	v
PORTREVISION=	1
CATEGORIES=	x11

MAINTAINER=	swills@FreeBSD.org
COMMENT=	GUI for radare2 reverse engineering framework

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/../COPYING

LIB_DEPENDS=	libr2.so:devel/radare2

USES=		pkgconfig qmake
USE_GITHUB=	yes
GH_ACCOUNT=	radareorg
GH_PROJECT=	cutter

USE_QT5=	buildtools_build core gui svg widgets

WRKSRC_SUBDIR=	src

PLIST_FILES=	bin/cutter \
		share/applications/cutter.desktop \
		share/pixmaps/cutter.svg

.include <bsd.port.mk>
