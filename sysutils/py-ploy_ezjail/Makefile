# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: head/sysutils/py-ploy_ezjail/Makefile 436290 2017-03-16 19:23:48Z antoine $

PORTNAME=	ploy_ezjail
PORTVERSION=	1.4.0
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Plugin for ploy to provision FreeBSD jails using ezjail

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools>0:devel/${PYTHON_PKGNAMEPREFIX}setuptools \
		${PYTHON_PKGNAMEPREFIX}ploy>=1.2.0:sysutils/py-ploy \
		${PYTHON_PKGNAMEPREFIX}lazy>0:devel/py-lazy

USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
