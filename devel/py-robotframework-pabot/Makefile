# Created by: Vladimir Chukharev
# $FreeBSD: head/devel/py-robotframework-pabot/Makefile 483085 2018-10-27 01:19:10Z swills $

PORTNAME=	robotframework-pabot
PORTVERSION=	0.45
CATEGORIES=	devel www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	Vladimir.Chukharev@gmail.com
COMMENT=	Parallel executor for Robot Framework test cases

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}robotframework>=2.7.5:devel/py-robotframework@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}robotremoteserver>=1.0.1:devel/py-robotremoteserver@${PY_FLAVOR}

USES=		python

NO_ARCH=	yes
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
