# Created by: Olivier Duchateau
# $FreeBSD: head/security/py-itsdangerous/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	itsdangerous
PORTVERSION=	0.24
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rm@FreeBSD.org
COMMENT=	Various helpers to pass data in untrusted environments

LICENSE=	BSD3CLAUSE

USES=	python
USE_PYTHON=	distutils autoplist

OPTIONS_DEFINE=	JSON

JSON_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}simplejson>=3.0:devel/py-simplejson@${FLAVOR}

.include <bsd.port.mk>
