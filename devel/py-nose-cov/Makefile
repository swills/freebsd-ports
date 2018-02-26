# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/devel/py-nose-cov/Makefile 462887 2018-02-25 00:40:37Z yuri $

PORTNAME=	nose-cov
PORTVERSION=	1.6
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Nose plugin for coverage reporting

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}nose>=0:devel/py-nose@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils

.include <bsd.port.mk>
