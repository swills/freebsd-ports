# $FreeBSD: head/www/py-django-bulk-update/Makefile 463771 2018-03-06 22:45:36Z rene $

PORTNAME=	django-bulk-update
PORTVERSION=	2.2.0
PORTREVISION=	3
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rene@FreeBSD.org
COMMENT=	Bulk update using a single query over Django ORM

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django>=1.11:www/py-django@${FLAVOR}

NO_ARCH=	yes
USES=		python:-3.4
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
