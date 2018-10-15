# $FreeBSD: head/textproc/qt5-xmlpatterns/Makefile 482034 2018-10-14 08:01:13Z tcberner $

PORTNAME=	xmlpatterns
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	textproc
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt support for XPath, XQuery, XSLT and XML Schema

USE_QT=		core network buildtools_build
USES=		compiler:c++11-lang qmake:norecursive qt-dist:5,xmlpatterns
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
