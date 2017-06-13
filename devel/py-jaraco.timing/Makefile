# Created by: William Grzybowski <wg@FreeBSD.org>
# $FreeBSD: head/devel/py-jaraco.timing/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	jaraco.timing
PORTVERSION=	1.1.5
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Routines pertinent to the fourth dimension

LICENSE=	MIT

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}hgtools>0:devel/py-hgtools \
		${PYTHON_PKGNAMEPREFIX}pytest-runner>0:devel/py-pytest-runner \
		${PYTHON_PKGNAMEPREFIX}setuptools_scm>0:devel/py-setuptools_scm

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
