# Created by: René Ladan <rene@freebsd.org>
# $FreeBSD: head/sysutils/py-scandir/Makefile 462056 2018-02-16 19:31:07Z rene $

PORTNAME=	scandir
PORTVERSION=	1.7
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
