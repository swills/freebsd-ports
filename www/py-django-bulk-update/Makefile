# $FreeBSD: head/www/py-django-bulk-update/Makefile 457801 2018-01-01 20:58:43Z sunpoet $

PORTNAME=	django-bulk-update
PORTVERSION=	2.2.0
PORTREVISION=	2
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rene@FreeBSD.org
COMMENT=	Bulk update using a single query over Django ORM

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django111>0:www/py-django111@${FLAVOR}

NO_ARCH=	yes
USES=		python:-3.4
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
