# Created by: René Ladan <rene@freebsd.org>
# $FreeBSD: head/sysutils/py-scandir/Makefile 442902 2017-06-08 02:14:32Z rene $

PORTNAME=	scandir
PORTVERSION=	1.5
DISTVERSIONPREFIX=	v
CATEGORIES=	sysutils python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rene@FreeBSD.org
COMMENT=	Fast and featureful directory iterator

LICENSE=	BSD3CLAUSE

USE_GITHUB=	yes
GH_ACCOUNT=	benhoyt

USES=		python
USE_PYTHON=	autoplist distutils

do-test:
	${PYTHON_CMD} ${WRKSRC}/test/run_tests.py

.include <bsd.port.mk>
