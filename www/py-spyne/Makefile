# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/www/py-spyne/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	spyne
PORTVERSION=	2.12.14
PORTREVISION=	1
CATEGORIES=	www devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Transport and architecture agnostic RPC library

LICENSE=	LGPL21

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytz>=0:devel/py-pytz@${PY_FLAVOR}

NO_ARCH=	yes
USE_LOCALE=	en_US.UTF-8
USE_PYTHON=	autoplist concurrent distutils
USES=		python

.include <bsd.port.mk>
