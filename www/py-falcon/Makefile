# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: head/www/py-falcon/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	falcon
PORTVERSION=	1.0.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lichray@gmail.com
COMMENT=	High-performance Python framework for building cloud APIs

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}testtools>=0:devel/py-testtools@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>=1.1.0:devel/py-six@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}mimeparse>=0.1.4:devel/py-mimeparse@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist cython

.include <bsd.port.mk>
