# Created by: René Ladan <rene@freebsd.org>
# $FreeBSD: head/www/py-django-overextends/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	django-overextends
PORTVERSION=	0.4.3
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rene@FreeBSD.org
COMMENT=	Django reusable app enabling circular template inheritance

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django18>=1.8:www/py-django18@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}sphinx-me>=0.1.2:textproc/py-sphinx-me@${FLAVOR}

NO_ARCH=	yes

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
