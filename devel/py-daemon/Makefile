# Created by: jessekempf@gmail.com
# $FreeBSD: head/devel/py-daemon/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	daemon
PORTVERSION=	2.0.6
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	python-daemon-${PORTVERSION}

MAINTAINER=	jessekempf@gmail.com
COMMENT=	Well-behaved daemon framework for Python

LICENSE=	APACHE20

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}docutils>=0:textproc/py-docutils \
		${PYTHON_PKGNAMEPREFIX}lockfile>=0.10:devel/py-lockfile
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USE_PYTHON=	autoplist concurrent distutils
USES=		python

.include <bsd.port.mk>
