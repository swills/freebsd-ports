# Created by: ijliao
# $FreeBSD: head/misc/py-pexpect/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	pexpect
PORTVERSION=	4.2.1
CATEGORIES=	misc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Pure Python Expect-like module

LICENSE=	ISCL

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}ptyprocess>=0:sysutils/py-ptyprocess@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
