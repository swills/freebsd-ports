# Created by: René Ladan <rene@freebsd.org>
# $FreeBSD: head/sysutils/py-scandir/Makefile 450995 2017-09-30 14:45:58Z rene $

PORTNAME=	scandir
PORTVERSION=	1.6
DISTVERSIONPREFIX=	v
CATEGORIES=	sysutils python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rene@FreeBSD.org
COMMENT=	Fast and featureful directory iterator

LICENSE=	BSD3CLAUSE

USES=		python
USE_PYTHON=	autoplist distutils

USE_GITHUB=	yes
GH_ACCOUNT=	benhoyt

do-test:
	${PYTHON_CMD} ${WRKSRC}/test/run_tests.py

.include <bsd.port.mk>
