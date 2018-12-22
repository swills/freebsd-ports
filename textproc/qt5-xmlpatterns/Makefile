# $FreeBSD: head/textproc/qt5-xmlpatterns/Makefile 487594 2018-12-16 14:49:16Z tcberner $

PORTNAME=	xmlpatterns
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	textproc
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt support for XPath, XQuery, XSLT and XML Schema

USES=		compiler:c++11-lang qmake:norecursive qt-dist:5,xmlpatterns
USE_QT=		core network buildtools_build
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
