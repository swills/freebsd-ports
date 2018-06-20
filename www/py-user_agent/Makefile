# $FreeBSD: head/www/py-user_agent/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	user_agent
PORTVERSION=	0.1.9
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rm@FreeBSD.org
COMMENT=	Generates random, valid User-Agent values

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
