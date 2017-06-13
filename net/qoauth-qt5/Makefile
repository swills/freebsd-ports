# Created by: Dima Panov <fluffy@FreeBSD.org>
# $FreeBSD: head/net/qoauth-qt5/Makefile 437115 2017-03-28 10:49:48Z rakuco $

PORTNAME=	qoauth
PORTVERSION=	2.0.0
DISTVERSIONPREFIX=	v
CATEGORIES=	net devel security
PKGNAMESUFFIX=	-qt5

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt5 support for OAuth-powered network services

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libqca-qt5.so:devel/qca-qt5

USES=		qmake:outsource
USE_LDCONFIG=	yes
USE_QT5=	core network testlib buildtools_build qmake_build

USE_GITHUB=	yes
GH_ACCOUNT=	ayoy

.include <bsd.port.mk>
