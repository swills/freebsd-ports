# Created by: Kyle Evans <kevans@FreeBSD.org>
# $FreeBSD: head/www/py-flask-principal/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	Flask-Principal
PORTVERSION=	0.4.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kevans@FreeBSD.org
COMMENT=	Identity management for flask

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Flask>=0:www/py-flask@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}blinker>=0:devel/py-blinker@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
