# Created by: Jason Bacon <bacon4000@gmail.com>
# $FreeBSD: head/math/py-fiat/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	fiat
PORTVERSION=	${MMVERSION}.0
PORTREVISION=	3
CATEGORIES=	math python
MASTER_SITES=	https://launchpad.net/${PORTNAME}/${MMVERSION}.x/release-${MMVERSION}/+download/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME}-${MMVERSION}

MAINTAINER=	bacon4000@gmail.com
COMMENT=	FInite element Automatic Tabulator

LICENSE=	LGPL3

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}scientific>=0:math/py-scientific
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		python:2
USE_PYTHON=	distutils autoplist

MMVERSION=	1.1

.include <bsd.port.mk>
