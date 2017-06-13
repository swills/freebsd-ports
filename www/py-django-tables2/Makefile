# Created by: Kozlov Sergey <kozlov.sergey.404@gmail.com>
# $FreeBSD: head/www/py-django-tables2/Makefile 431693 2017-01-16 19:20:12Z amdmi3 $

PORTNAME=	django-tables2
PORTVERSION=	1.2.9
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kozlov.sergey.404@gmail.com
COMMENT=	Table/data-grid framework for Django

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django18>=0:www/py-django18 \
		${PYTHON_PKGNAMEPREFIX}six>=0:devel/py-six

NO_ARCH=	yes

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
