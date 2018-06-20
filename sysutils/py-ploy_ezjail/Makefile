# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: head/sysutils/py-ploy_ezjail/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	ploy_ezjail
PORTVERSION=	1.4.0
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Plugin for ploy to provision FreeBSD jails using ezjail

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools>0:devel/py-setuptools@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}ploy>=1.2.0:sysutils/py-ploy@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}lazy>0:devel/py-lazy@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
