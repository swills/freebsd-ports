# Created by: Dmitry Sivachenko <demon@FreeBSD.org>
# $FreeBSD: head/net-im/py-python-telegram-bot/Makefile 455827 2017-12-09 09:20:30Z olgeni $

PORTNAME=	python-telegram-bot
PORTVERSION=	9.0.0
CATEGORIES=	net-im devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Not just a Python wrapper around the Telegram Bot API

LICENSE=	LGPL3

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}future>0:devel/py-future@${FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}future>0:devel/py-future@${FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} < 3400
BUILD_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}certifi>0:security/py-certifi@${FLAVOR}
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}certifi>0:security/py-certifi@${FLAVOR}
.endif

.include <bsd.port.post.mk>
