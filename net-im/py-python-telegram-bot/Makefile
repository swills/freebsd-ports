# Created by: Dmitry Sivachenko <demon@FreeBSD.org>
# $FreeBSD: head/net-im/py-python-telegram-bot/Makefile 449114 2017-09-02 09:20:57Z olgeni $

PORTNAME=	python-telegram-bot
PORTVERSION=	8.0
CATEGORIES=	net-im devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Not just a Python wrapper around the Telegram Bot API

LICENSE=	LGPL3

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}future>0:devel/py-future
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}future>0:devel/py-future

NO_ARCH=	yes
USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} < 3400
BUILD_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}certifi>0:security/py-certifi
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}certifi>0:security/py-certifi
.endif

.include <bsd.port.post.mk>
