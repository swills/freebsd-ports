# Created by: Chao Shin <quakelee@cn.FreeBSD.org>
# $FreeBSD: head/devel/py-pyutil/Makefile 460551 2018-02-01 02:56:52Z wen $

PORTNAME=	pyutil
PORTVERSION=	3.1.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Collection of mature utilities for Python programmers

LICENSE=	GPLv2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}simplejson>=2.1.1:devel/py-simplejson@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zbase32>=1.1.0:converters/zbase32

USES=		python:2
USE_PYTHON=	distutils autoplist

post-extract:
	@${FIND} ${WRKSRC} -type f -name "*.py~" -delete

.include <bsd.port.mk>
