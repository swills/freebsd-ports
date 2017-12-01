# Created by: philip@FreeBSD.org
# $FreeBSD: head/devel/py-threema-msgapi/Makefile 455248 2017-12-01 06:57:51Z philip $

PORTNAME=	threema-msgapi
PORTVERSION=	3.0.6
DISTVERSIONPREFIX=	v
CATEGORIES=	devel python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	philip@FreeBSD.org
COMMENT=	Threema Gateway Message SDK for Python

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		python:3.2+
USE_PYTHON=	distutils autoplist
USE_GITHUB=	yes
GH_ACCOUNT=	lgrahl
GH_PROJECT=	threema-msgapi-sdk-python

RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}click>0:devel/py-click@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pylru-cache>0:devel/py-pylru-cache@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}logbook>0:devel/py-logbook@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}wrapt>0:devel/py-wrapt@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}libnacl>0:security/py-libnacl@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}aiohttp>0:www/py-aiohttp@${FLAVOR}

.include <bsd.port.mk>
