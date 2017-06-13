# Created by: William Grzybowski <william88@gmail.com>
# $FreeBSD: head/devel/py-pytest-runner/Makefile 432229 2017-01-23 14:24:43Z amdmi3 $

PORTNAME=	pytest-runner
PORTVERSION=	2.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Test support for pytest runner in setup.py

LICENSE=	MIT

BUILD_DEPENDS?=	${PYTHON_PKGNAMEPREFIX}hgtools>=0:devel/py-hgtools

USES?=		python zip
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
