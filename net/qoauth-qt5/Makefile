# Created by: Dima Panov <fluffy@FreeBSD.org>
# $FreeBSD: head/net/qoauth-qt5/Makefile 482605 2018-10-20 17:00:28Z tcberner $

PORTNAME=	qoauth
PORTVERSION=	2.0.0
DISTVERSIONPREFIX=	v
PORTREVISION=	1
CATEGORIES=	net devel security
PKGNAMESUFFIX=	-qt5

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt5 support for OAuth-powered network services

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libqca-qt5.so:devel/qca@qt5

USES=		compiler:c++11-lang qmake:outsource qt:5
USE_LDCONFIG=	yes
USE_QT=		core network testlib buildtools_build qmake_build

USE_GITHUB=	yes
GH_ACCOUNT=	ayoy

.include <bsd.port.mk>
