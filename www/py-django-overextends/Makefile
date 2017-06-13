# Created by: René Ladan <rene@freebsd.org>
# $FreeBSD: head/www/py-django-overextends/Makefile 438300 2017-04-11 18:24:20Z rene $

PORTNAME=	django-overextends
PORTVERSION=	0.4.3
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rene@FreeBSD.org
COMMENT=	Django reusable app enabling circular template inheritance

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django18>=1.8:www/py-django18 \
		${PYTHON_PKGNAMEPREFIX}sphinx-me>=0.1.2:textproc/py-sphinx-me

NO_ARCH=	yes

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
