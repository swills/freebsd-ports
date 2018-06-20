# Created by: Oleg Pudeyev <oleg@bsdpower.com>
# $FreeBSD: head/www/py-frozen-flask/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	Frozen-Flask
PORTVERSION=	0.11
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	oleg@bsdpower.com
COMMENT=	Freezes a Flask application into a set of static files

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Flask>=0:www/py-flask@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
