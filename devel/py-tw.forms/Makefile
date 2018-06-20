# Created by: Yuan-Chung Hsiao <ychsiao@gmail.com>
# $FreeBSD: head/devel/py-tw.forms/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	tw.forms
PORTVERSION=	0.9.9
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ychsiao@ychsiao.org
COMMENT=	Web Widgets for building and validating forms

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}ToscaWidgets>=0:devel/py-ToscaWidgets@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}formencode>=0:www/py-formencode@${PY_FLAVOR}
RUN_DEPENDS:=	${PYTHON_PKGNAMEPREFIX}ToscaWidgets>=0:devel/py-ToscaWidgets@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}formencode>=0:www/py-formencode@${PY_FLAVOR}

USES=		python:2.7
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
