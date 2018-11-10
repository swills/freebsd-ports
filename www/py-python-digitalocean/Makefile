# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD$

PORTNAME=	python-digitalocean
PORTVERSION=	1.13.2
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	API to manage digitalocean.com droplets

LICENSE=	GPLv3

RUN_DEPENDS=	
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}requests>=2.0.0:www/py-requests@${PY_FLAVOR}
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}jsonpickle>0:devel/py-jsonpickle@${PY_FLAVOR}

USES=	python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
