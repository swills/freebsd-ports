# Created by: William Grzybowski <william88@gmail.com>
# $FreeBSD: head/www/py-django-tastypie/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	django-tastypie
PORTVERSION=	0.14.1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Create REST API for Django apps

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}mimeparse>=0.1.4:devel/py-mimeparse@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}dateutil>=2.1:devel/py-dateutil@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}django111>0:www/py-django111@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

NO_ARCH=	yes

.include <bsd.port.mk>
