# $FreeBSD: head/net/libkfbapi/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	libkfbapi
PORTVERSION=	1.0
PORTREVISION=	7
CATEGORIES=	net kde
MASTER_SITES=	KDE/stable/libkfbapi/${PORTVERSION}/src
DIST_SUBDIR=	KDE

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Library for accessing Facebook services

LICENSE=	LGPL20

LIB_DEPENDS=	libqjson.so:devel/qjson@qt4

USES=		cmake:outsource gettext kde:4 qt:4 tar:bzip2
USE_KDE=	automoc4 kdelibs pimlibs
USE_LDCONFIG=	yes
USE_QT=		gui webkit \
		qmake_build moc_build rcc_build uic_build

pre-configure:
	${REINPLACE_CMD} -e '/pkgconfig/ s/$${LIB_INSTALL_DIR}/libdata/' \
		${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
