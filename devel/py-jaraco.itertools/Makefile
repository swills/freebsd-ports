# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/devel/py-jaraco.itertools/Makefile 417315 2016-06-22 15:20:54Z feld $

PORTNAME=	jaraco.itertools
PORTVERSION=	1.7.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	feld@FreeBSD.org
COMMENT=	Tools for working with iterables

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six \
		${PYTHON_PKGNAMEPREFIX}more-itertools>0:devel/py-more-itertools \
		${PYTHON_PKGNAMEPREFIX}inflect>0:devel/py-inflect
BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools_scm>0:devel/py-setuptools_scm

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
