# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/devel/py-invoke/Makefile 442258 2017-05-31 19:12:41Z feld $

PORTNAME=	invoke
PORTVERSION=	0.17.0
PORTREVISION=	0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	feld@FreeBSD.org
COMMENT=	Python task execution tool & library

LICENSE=	BSD2CLAUSE

USES=		python
USE_PYTHON=	autoplist distutils

RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}semantic_version>0:devel/py-semantic_version
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}wheel>0:devel/py-wheel
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}twine>0:devel/py-twine
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}coverage>0:devel/py-coverage

NO_ARCH=	YES

.include <bsd.port.mk>
