# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/py-smmap2/Makefile 456450 2017-12-15 23:53:59Z sunpoet $

PORTNAME=	smmap2
PORTVERSION=	2.0.3
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Sliding-window memory map manager

LICENSE=	BSD3CLAUSE

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}nose>=0:devel/py-nose@${FLAVOR}

CONFLICTS_INSTALL=	${PYTHON_PKGNAMEPREFIX}smmap

NO_ARCH=	yes
USE_PYTHON=	autoplist concurrent distutils
USES=		python

.include <bsd.port.mk>
