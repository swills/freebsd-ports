# Created by: Alexander Nusov <alexander.nusov@nfvexpress.com>
# $FreeBSD: head/devel/py-retrying/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	retrying
PORTVERSION=	1.3.3
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	alexander.nusov@nfvexpress.com
COMMENT=	General-purpose retrying library, written in Python

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>=1.7.0:devel/py-six@${PY_FLAVOR}

NO_ARCH=	yes

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
