# Created by: Jov <amutu@amutu.com>
# $FreeBSD: head/devel/py-backports.weakref/Makefile 473023 2018-06-22 08:28:00Z yuri $

PORTNAME=	backports.weakref
DISTVERSION=	1.0rc1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Backport of the weakref module from Python 3.4

LICENSE=	PSFL

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools_scm>0:devel/py-setuptools_scm@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python:2.7
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
