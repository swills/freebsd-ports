# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: head/www/py-python-digitalocean/Makefile 461244 2018-02-08 15:12:12Z skreuzer $

PORTNAME=	python-digitalocean
PORTVERSION=	1.13.2
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	API to manage digitalocean.com droplets

LICENSE=	GPLv3

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=2.0.0:www/py-requests@${FLAVOR}

USES=	python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
