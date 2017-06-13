# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/devel/py-nose-cov/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	nose-cov
PORTVERSION=	1.6
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@rawbw.com
COMMENT=	Nose plugin for coverage reporting

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}nose>=0:devel/py-nose

USES=		python
USE_PYTHON=	autoplist concurrent distutils

.include <bsd.port.mk>
