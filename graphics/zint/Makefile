# Created by: Gvozdikov Veniamin <g.veniamin@googlemail.com>
# $FreeBSD: head/graphics/zint/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	zint
PORTVERSION=	2.4.3
PORTREVISION=	4
CATEGORIES=	graphics
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Zint Barcode Generator

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libpng.so:graphics/png

USES=		cmake qt:4
USE_LDCONFIG=	yes
USE_QT=		gui xml qmake_build uic_build moc_build rcc_build designer

DESKTOP_ENTRIES="Zint" "Barcode generator" "" "zint-qt" "" false

.include <bsd.port.mk>
