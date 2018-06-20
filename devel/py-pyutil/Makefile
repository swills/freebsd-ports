# Created by: Chao Shin <quakelee@cn.FreeBSD.org>
# $FreeBSD: head/devel/py-pyutil/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	pyutil
PORTVERSION=	3.1.0
PORTREVISION=	2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Collection of mature utilities for Python programmers

LICENSE=	GPLv2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}simplejson>=2.1.0:devel/py-simplejson@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zbase32>=1.0:converters/zbase32@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python:2.7
USE_PYTHON=	autoplist concurrent distutils

post-extract:
	@${FIND} ${WRKSRC} -type f -name "*.py~" -delete

.include <bsd.port.mk>
