# $FreeBSD: head/sysutils/baloo-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	baloo
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	9
CATEGORIES=	sysutils kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE framework for searching and managing user metadata

CONFLICTS_INSTALL=	kde-runtime-4.12.* \
			kf5-baloo-5.*

LIB_DEPENDS=	libxapian.so:databases/xapian-core \
		libqjson.so:devel/qjson@qt4

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_KDE=	akonadi automoc4 kdelibs kfilemetadata \
		pimlibs
USE_QT=		corelib qmake_build moc_build rcc_build uic_build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
