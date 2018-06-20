# Created by: Jui-Nan Lin <jnlin@freebsd.cs.nctu.edu.tw>
# $FreeBSD: head/devel/py_static_check/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	py_static_check
PORTVERSION=	1.2
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP

MAINTAINER=	jnlin@freebsd.cs.nctu.edu.tw
COMMENT=	Statically check your python code

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pyflakes>=0.5:devel/py-pyflakes@${PY_FLAVOR}

USES=		python:2.7
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
