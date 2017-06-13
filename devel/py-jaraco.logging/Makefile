# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/devel/py-jaraco.logging/Makefile 417623 2016-06-26 23:59:46Z hrs $

PORTNAME=	jaraco.logging
PORTVERSION=	1.3.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	feld@FreeBSD.org
COMMENT=	Additional facilities to supplement Python's stdlib logging module

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six \
		${PYTHON_PKGNAMEPREFIX}tempora>0:devel/py-tempora
BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools_scm>0:devel/py-setuptools_scm

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
