# Created by: Nicola Vitale <nivit@FreeBSD.org>
# $FreeBSD: head/devel/generatorrunner/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	generatorrunner
PORTVERSION=	0.6.16
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tool to create binding generators for C++ and Qt libraries

LICENSE=	GPLv2

BUILD_DEPENDS=	sphinx-build:textproc/py-sphinx
LIB_DEPENDS=	libapiextractor.so:devel/apiextractor

PLIST_SUB=	PORTVERSION=${PORTVERSION}

USE_QT=		gui qmake_build qtestlib moc_build rcc_build uic_build xml

USES=		cmake qt:4
USE_GITHUB=	yes
USE_LDCONFIG=	yes

GH_ACCOUNT=	PySide
GH_PROJECT=	Generatorrunner

.include <bsd.port.mk>
