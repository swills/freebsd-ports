# $FreeBSD: head/x11-themes/kf5-breeze-icons/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	breeze-icons
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11-themes kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Breeze icon theme for KDE

LICENSE=	LGPL3+
LICENSE_FILE=	${WRKSRC}/COPYING-ICONS

USES=		cmake:outsource kde:5 qt:5 tar:xz
USE_KDE=	ecm
USE_QT=		buildtools_build core qmake_build testlib

NO_ARCH=	yes

.include <bsd.port.mk>
