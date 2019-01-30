# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: head/textproc/py-texttable/Makefile 491296 2019-01-26 15:09:14Z dbaio $

PORTNAME=	texttable
PORTVERSION=	1.6.0
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	Module for creating simple ASCII tables

LICENSE=	MIT

CJKWRAP_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cjkwrap>=0:textproc/py-cjkwrap@${PY_FLAVOR}

USES=	python
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

OPTIONS_DEFINE=	CJKWRAP

CJKWRAP_DESC=	Text Wrapping with better CJK text support

.include <bsd.port.mk>
