# Created by: Vladimir Chukharev
# $FreeBSD: head/devel/py-robotframework-pabot/Makefile 488644 2018-12-29 01:48:25Z swills $

PORTNAME=	robotframework-pabot
PORTVERSION=	0.46
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
