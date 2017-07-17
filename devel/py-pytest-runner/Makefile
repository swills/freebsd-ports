# Created by: William Grzybowski <william88@gmail.com>
# $FreeBSD: head/devel/py-pytest-runner/Makefile 445543 2017-07-11 19:13:28Z sunpoet $

PORTNAME=	pytest-runner
PORTVERSION=	2.11.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Test support for pytest runner in setup.py

LICENSE=	MIT

BUILD_DEPENDS?=	${PYTHON_PKGNAMEPREFIX}setuptools_scm>=1.15.0:devel/py-setuptools_scm

USES?=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
