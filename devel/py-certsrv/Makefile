# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/devel/py-certsrv/Makefile 489109 2019-01-02 23:58:16Z sunpoet $

PORTNAME=	certsrv
PORTVERSION=	2.1.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Python client for the Microsoft Certificate Authority

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=0:www/py-requests@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

.include <bsd.port.mk>
