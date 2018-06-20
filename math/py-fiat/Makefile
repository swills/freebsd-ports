# $FreeBSD: head/math/py-fiat/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	fiat
PORTVERSION=	${MMVERSION}.0
PORTREVISION=	5
CATEGORIES=	math python
MASTER_SITES=	https://launchpad.net/${PORTNAME}/${MMVERSION}.x/release-${MMVERSION}/+download/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME}-${MMVERSION}

MAINTAINER=	jwb@FreeBSD.org
COMMENT=	FInite element Automatic Tabulator

LICENSE=	LGPL3

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}scientific>=0:math/py-scientific@${PY_FLAVOR}
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		python:2.7
USE_PYTHON=	distutils autoplist

MMVERSION=	1.1

.include <bsd.port.mk>
