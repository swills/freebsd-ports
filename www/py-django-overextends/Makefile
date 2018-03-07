# Created by: René Ladan <rene@freebsd.org>
# $FreeBSD: head/www/py-django-overextends/Makefile 463771 2018-03-06 22:45:36Z rene $

PORTNAME=	django-overextends
PORTVERSION=	0.4.3
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rene@FreeBSD.org
COMMENT=	Django reusable app enabling circular template inheritance

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django>=1.8:www/py-django@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}sphinx-me>=0.1.2:textproc/py-sphinx-me@${FLAVOR}

NO_ARCH=	yes

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
