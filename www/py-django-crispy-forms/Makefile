# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/www/py-django-crispy-forms/Makefile 463746 2018-03-06 20:31:19Z sunpoet $

PORTNAME=	django-crispy-forms
PORTVERSION=	1.7.1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Best way to have Django DRY forms

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django111>=0:www/py-django111@${FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist concurrent distutils

.include <bsd.port.mk>
