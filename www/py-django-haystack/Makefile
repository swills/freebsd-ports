# Created by: Kristaps Kulis <kristaps.kulis@gmail.com>
# $FreeBSD: head/www/py-django-haystack/Makefile 424615 2016-10-25 10:38:22Z rm $

PORTNAME=	django-haystack
PORTVERSION=	2.5.0
CATEGORIES=	www databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kristaps.kulis@gmail.com
COMMENT=	Pluggable search for Django

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django18>=0:www/py-django18

NO_ARCH=	yes
USES=		python:2.7+
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
