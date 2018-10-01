# $FreeBSD: head/devel/py-fusepy/Makefile 480923 2018-09-29 20:36:40Z jbeich $

PORTNAME=	fusepy
PORTVERSION=	3.0.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	Simple ctypes bindings for FUSE

LICENSE=	ISCL

CONFLICTS_INSTALL=	${PYTHON_PKGNAMEPREFIX}fusefs # fuse.py

NO_ARCH=	yes
USES=		fuse python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
