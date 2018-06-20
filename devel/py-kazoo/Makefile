# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: head/devel/py-kazoo/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	kazoo
PORTVERSION=	2.3.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Higher Level API to Zookeeper for Python

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.interface>=0:devel/py-zope.interface@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}gevent>=0.13.8:devel/py-gevent@${PY_FLAVOR}

USES=		gmake python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
