# Created by: fluffy@
# $FreeBSD: head/graphics/prison/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	prison
PORTVERSION=	1.1.1
PORTREVISION=	1
CATEGORIES=	graphics kde
MASTER_SITES=	KDE/stable/${PORTNAME}/${PORTVERSION}/src
DIST_SUBDIR=	KDE/${PORTNAME}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Barcode library for KDE

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libdmtx.so:graphics/libdmtx \
		libqrencode.so:graphics/libqrencode

USES=		cmake:outsource qt:4 tar:xz
USE_QT=		corelib gui qmake_build moc_build rcc_build uic_build

USE_LDCONFIG=	yes

.include <bsd.port.mk>
