# Created by: Massimiliano Stucchi <mstucchi@ripe.net>
# $FreeBSD: head/net/py-ripe.atlas.cousteau/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	ripe.atlas.cousteau
PORTVERSION=	1.0.6
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	mstucchi@ripe.net
COMMENT=	Python wrapper around the RIPE Atlas API

LICENSE=	GPLv3

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}dateutil>0:devel/py-dateutil \
		${PYTHON_PKGNAMEPREFIX}socketio-client>=0.6.5:net/py-socketio-client \
		${PYTHON_PKGNAMEPREFIX}requests>=2.7.0:www/py-requests

USES=	python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
