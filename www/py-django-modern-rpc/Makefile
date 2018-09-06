# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/www/py-django-modern-rpc/Makefile 478732 2018-09-01 22:50:49Z sunpoet $

PORTNAME=	django-modern-rpc
PORTVERSION=	0.11.1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Simple and modern JSON-RPC and XML-RPC server implementation for Django

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django111>=1.8.0:www/py-django111@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

.include <bsd.port.mk>
