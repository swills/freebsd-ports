# Created by: Nicola Vitale <nivit@FreeBSD.org>
# $FreeBSD: head/net/qtweetlib/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	qtweetlib
PORTVERSION=	0.5
CATEGORIES=	net

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	C++ Qt based Twitter library

LICENSE=	LGPL21

LIB_DEPENDS=	libqjson.so:devel/qjson

GH_ACCOUNT=	minimoog
GH_PROJECT=	QTweetLib

USES=		cmake
USE_GITHUB=	yes
USE_LDCONFIG=	yes
USE_QT4=	gui moc_build network qmake_build rcc_build uic_build

.include <bsd.port.mk>
