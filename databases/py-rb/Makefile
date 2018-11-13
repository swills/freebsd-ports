# Created by: Tom Judge <tj@FreeBSD.org>
# $FreeBSD: head/databases/py-rb/Makefile 484575 2018-11-10 07:56:55Z sunpoet $

PORTNAME=	rb
PORTVERSION=	1.7
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Redis blaster

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}redis>=2.6:databases/py-redis@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

.include <bsd.port.mk>
