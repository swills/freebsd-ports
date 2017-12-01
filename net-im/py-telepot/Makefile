# $FreeBSD: head/net-im/py-telepot/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	telepot
PORTVERSION=	9.1
CATEGORIES=	net-im python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kevlo@FreeBSD.org
COMMENT=	Python framework for Telegram Bot API

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}urllib3>0:net/py-urllib3@${FLAVOR}

NO_ARCH=	yes
USES=		python zip
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
