# Created by: antoine@FreeBSD.org
# $FreeBSD: head/www/py-flask-sockets/Makefile 417032 2016-06-17 19:49:20Z antoine $

PORTNAME=	Flask-Sockets
PORTVERSION=	0.2.1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Elegant WebSockets for your Flask apps

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Flask>=0:www/py-flask \
		${PYTHON_PKGNAMEPREFIX}gevent>=0:devel/py-gevent \
		${PYTHON_PKGNAMEPREFIX}gevent-websocket>=0:www/py-gevent-websocket

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
