# $FreeBSD: head/net/kf5-kholidays/Makefile 488341 2018-12-25 20:25:39Z tcberner $

PORTNAME=	kholidays
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	net kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE library for calendar holidays

LICENSE=	LGPL21

USES=		cmake compiler:c++11-lib gettext kde:5 qt:5 tar:xz
USE_KDE=	ecm emoticons kdelibs4support init itemmodels itemviews
USE_QT=		core declarative gui buildtools_build qmake_build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
