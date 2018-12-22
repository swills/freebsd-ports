# $FreeBSD: head/x11-toolkits/qt5-quickcontrols2/Makefile 487594 2018-12-16 14:49:16Z tcberner $

PORTNAME=	quickcontrols2
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	x11-toolkits
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Set of controls for building complete interfaces in Qt Quick

BROKEN_armv6=		fails to install: pkg-static: Unable to access file DayOfWeekRow.qmlc: No such file or directory

USES=		compiler:c++11-lang qmake:norecursive qt-dist:5
USE_QT=		core declarative gui widgets \
		buildtools_build
QT_DIST=	${PORTNAME}
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
