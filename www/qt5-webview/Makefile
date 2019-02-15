# $FreeBSD: head/www/qt5-webview/Makefile 492793 2019-02-12 17:43:00Z tcberner $

PORTNAME=	webview
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	www
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt component for displaying web content

USES=		compiler:c++11-lang gl qmake:norecursive qt-dist:5
USE_GL=		gl
USE_QT=		core declarative gui location network webchannel webengine \
		buildtools_build
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
