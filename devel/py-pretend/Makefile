# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: head/devel/py-pretend/Makefile 443055 2017-06-10 02:01:12Z woodsb02 $

PORTNAME=		pretend
PORTVERSION=		1.0.8
DISTVERSIONPREFIX=	v
CATEGORIES=		devel python
PKGNAMEPREFIX=		${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Library for stubbing in Python

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.rst

TEST_DEPENDS?=	${PYTHON_PKGNAMEPREFIX}pytest>0:devel/py-pytest

USES?=		python
USE_PYTHON=	autoplist distutils

USE_GITHUB=	yes
GH_ACCOUNT=	alex

.include <bsd.port.mk>
