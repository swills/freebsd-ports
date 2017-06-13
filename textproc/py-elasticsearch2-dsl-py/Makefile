# Created by: Dan Langille <dvl@FreeBSD.org>
# $FreeBSD: head/textproc/py-elasticsearch2-dsl-py/Makefile 438214 2017-04-10 21:49:02Z mat $

PORTNAME=	py-elasticsearch2-dsl-py
PORTVERSION=	2.1.0
CATEGORIES=	textproc python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dvl@FreeBSD.org
COMMENT=	High level Python client for Elasticsearch

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}elasticsearch-py>=1.3.0:textproc/py-elasticsearch-py

USE_GITHUB=	yes
GH_ACCOUNT=	elastic
GH_PROJECT=	elasticsearch-dsl-py

USES=		python:2
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
