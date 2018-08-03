# Created by: ijliao
# $FreeBSD: head/misc/py-pexpect/Makefile 475883 2018-07-30 12:16:55Z rm $

PORTNAME=	pexpect
PORTVERSION=	4.6.0
CATEGORIES=	misc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Pure Python Expect-like module

LICENSE=	ISCL

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}ptyprocess>=0:sysutils/py-ptyprocess@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
