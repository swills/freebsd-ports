# Created by: Jov <amutu@amutu.com>
# $FreeBSD: head/devel/py-backports.weakref/Makefile 477184 2018-08-14 16:42:01Z sunpoet $

PORTNAME=	backports.weakref
DISTVERSION=	1.0
DISTVERSIONSUFFIX=	.post1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Backport of the weakref module from Python 3.4

LICENSE=	PSFL
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools_scm>0:devel/py-setuptools_scm@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python:2.7
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
