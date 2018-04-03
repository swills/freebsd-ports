# $FreeBSD: head/textproc/qt5-xmlpatterns/Makefile 465911 2018-03-29 19:03:17Z tcberner $

PORTNAME=	xmlpatterns
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	textproc
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt support for XPath, XQuery, XSLT and XML Schema

BROKEN_powerpc64=	Does not build

USE_QT5=	core network buildtools_build
QT_DIST=	${PORTNAME}
USES=		qmake:norecursive
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
