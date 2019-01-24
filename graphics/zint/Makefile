# Created by: Gvozdikov Veniamin <g.veniamin@googlemail.com>
# $FreeBSD: head/graphics/zint/Makefile 490472 2019-01-16 11:13:44Z tijl $

PORTNAME=	zint
DISTVERSION=	2.6.3_rc2	# NOT a "release candidate", fixup for 2.6.3
PORTREVISION=	1
CATEGORIES=	graphics
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/2.6.3
DISTNAME=	${PORTNAME}-${DISTVERSION}.src

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Zint Barcode Generator

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

PORTSCOUT=	skipv:2.6.3

LIB_DEPENDS=	libpng.so:graphics/png

USES=		cmake qt:5
USE_LDCONFIG=	yes
USE_QT=		buildtools_build qmake_build uitools_build core gui widgets

DESKTOP_ENTRIES="Zint" "Barcode generator" "" "zint-qt" "" false

.include <bsd.port.mk>
