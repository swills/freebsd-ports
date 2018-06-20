# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/devel/py-pid/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	pid
PORTVERSION=	2.1.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	feld@FreeBSD.org
COMMENT=	Pidfile management for Python

LICENSE=	APACHE20

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR}

NO_ARCH=	yes

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
