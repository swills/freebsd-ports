# $FreeBSD: head/devel/py-coloredlogs/Makefile 442370 2017-06-02 11:01:16Z araujo $

PORTNAME=	coloredlogs
PORTVERSION=	7.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Colored terminal output for Python logging module

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS?=	${PYTHON_PKGNAMEPREFIX}humanfriendly>=2.1:textproc/py-humanfriendly

NO_ARCH=	yes
USES?=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
