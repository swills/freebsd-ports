# Created by: Michael Johnson <ahze@ahze.net>
# $FreeBSD: head/databases/py-python-memcached/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	python-memcached
PORTVERSION=	1.59
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Python API for memcached, a distributed memory cache daemon

LICENSE=	PSFL

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>=1.4.0:devel/py-six@${PY_FLAVOR}

NO_ARCH=	yes
USE_PYTHON=	autoplist concurrent distutils
USES=		python

.include <bsd.port.mk>
