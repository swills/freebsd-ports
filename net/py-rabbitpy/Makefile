# $FreeBSD: head/net/py-rabbitpy/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	rabbitpy
PORTVERSION=	1.0.0
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	RabbitMQ client library for Python

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pamqp>0:net/py-pamqp@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pamqp>0:net/py-pamqp@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
