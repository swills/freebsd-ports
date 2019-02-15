# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/databases/py-pg8000-112/Makefile 492902 2019-02-14 07:36:54Z wen $

PORTNAME=	pg8000
PORTVERSION=	1.12.5
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
PKGNAMESUFFIX=	-112

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Pure-Python Interface to the PostgreSQL Database

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>=0:devel/py-six@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
