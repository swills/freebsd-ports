# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: head/www/py-python-digitalocean/Makefile 486795 2018-12-06 20:32:47Z sunpoet $

PORTNAME=	python-digitalocean
PORTVERSION=	1.14.0
DISTVERSIONPREFIX=	v
CATEGORIES=	www python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	API to manage digitalocean.com droplets

LICENSE=	GPLv3

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=2.0.0:www/py-requests@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}jsonpickle>0:devel/py-jsonpickle@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

USE_GITHUB=	yes
GH_ACCOUNT=	koalalorenzo

USE_LOCALE=	en_US.UTF-8
NO_ARCH=	yes

.include <bsd.port.mk>
