# $FreeBSD: head/x11-toolkits/kf5-attica/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	attica
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11-toolkits kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Open Collaboration Services API library KDE5 version

# The sources are LGPL21 or LGPL3 or later-version-approved-by-KDE,
# so use the OR of existing license versions. COPYING is LGPL21.
LICENSE=	LGPL21 LGPL3
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cmake:outsource compiler:c++11-lib kde:5 pathfix qt:5 tar:xz
USE_KDE=	ecm
USE_QT=		buildtools_build core gui network qmake_build testlib_build widgets

.include <bsd.port.mk>
