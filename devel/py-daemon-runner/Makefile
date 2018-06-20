# Created by: Dan Langille <dvl@FreeBSD.org>
# $FreeBSD: head/devel/py-daemon-runner/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	daemon-runner
PORTVERSION=	0.0.15
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dvl@FreeBSD.org
COMMENT=	Simple command line runner on top of python-daemon

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}daemon>0:devel/py-daemon@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
