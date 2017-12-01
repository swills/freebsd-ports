# $FreeBSD: head/net/py-rabbitpy/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	rabbitpy
PORTVERSION=	1.0.0
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	RabbitMQ client library for Python

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pamqp>0:net/py-pamqp@${FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pamqp>0:net/py-pamqp@${FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
