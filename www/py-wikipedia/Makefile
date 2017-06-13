# Created by: Olivier Duchateau
# $FreeBSD: head/www/py-wikipedia/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	wikipedia
PORTVERSION=	1.4.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Wikipedia API for Python

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}beautifulsoup>=4.3.2:www/py-beautifulsoup \
	${PYTHON_PKGNAMEPREFIX}requests>=2.7:www/py-requests

USES=	python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
