# $FreeBSD: head/devel/py-docker-py/Makefile 441990 2017-05-29 14:50:08Z wg $

PORTNAME=	docker-py
PORTVERSION=	1.7.2
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	API client for docker written in Python

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}websocket-client>0:www/py-websocket-client

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
