# Created by: Kyle Evans <kevans@FreeBSD.org>
# $FreeBSD: head/www/py-flask-assets/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	Flask-Assets
PORTVERSION=	0.12
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kevans@FreeBSD.org
COMMENT=	Asset management for flask

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Flask>=0:www/py-flask@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}webassets>=0:www/py-webassets@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
