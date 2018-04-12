# $FreeBSD: head/devel/libkgapi-kde4/Makefile 467042 2018-04-11 09:57:25Z tcberner $

PORTNAME=	libkgapi
PORTVERSION=	2.2.0
PORTREVISION=	4
CATEGORIES=	devel kde
MASTER_SITES=	KDE/stable/libkgapi/${PORTVERSION}/src
PKGNAMESUFFIX=	-kde4
DIST_SUBDIR=	KDE

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE-based library for accessing various Google services

LICENSE=	GPLv2

LIB_DEPENDS=	libqjson.so:devel/qjson

USES=		cmake:outsource kde:4 tar:bzip2
USE_KDE=	automoc4 kdelibs pimlibs
USE_LDCONFIG=	yes
USE_QT4=	corelib network webkit xml \
		qmake_build moc_build rcc_build uic_build

PLIST_SUB+=	PORTVERSION=${PORTVERSION}

pre-configure:
	${REINPLACE_CMD} -e '/pkgconfig/ s/$${LIB_INSTALL_DIR}/libdata/' \
		${WRKSRC}/libkgapi*/CMakeLists.txt

.include <bsd.port.mk>
