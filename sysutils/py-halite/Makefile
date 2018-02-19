# Created by: Christer Edwards <christer.edwards@gmail.com>
# $FreeBSD: head/sysutils/py-halite/Makefile 462307 2018-02-19 11:10:43Z antoine $

PORTNAME=	halite
PORTVERSION=	0.1.15
PORTREVISION=	2
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	christer.edwards@gmail.com
COMMENT=	SaltStack Web UI

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}salt>=0.17.0:sysutils/py-salt@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}cherrypy>0:www/py-cherrypy@${FLAVOR}

USES=		python:2.7
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
