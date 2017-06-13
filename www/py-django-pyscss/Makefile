# Created by: Alexander Nusov <alexander.nusov@nfvexpress.com>
# $FreeBSD: head/www/py-django-pyscss/Makefile 439369 2017-04-25 09:05:07Z amdmi3 $

PORTNAME=	django-pyscss
PORTVERSION=	2.0.2
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	alexander.nusov@nfvexpress.com
COMMENT=	Makes it easier to use PySCSS in Django

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django18>=0:www/py-django18 \
		${PYTHON_PKGNAMEPREFIX}pyscss>=1.3.4:textproc/py-pyscss

NO_ARCH=	yes

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
