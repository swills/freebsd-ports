# Created by: Tom Judge <tj@FreeBSD.org>
# $FreeBSD: head/www/py-django-social-auth/Makefile 471396 2018-06-02 19:05:51Z miwi $

PORTNAME=	social-auth
PORTVERSION=	0.7.28
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}django-
DISTNAME=	django-${PORTNAME}-${PORTVERSION}

MAINTAINER=	tj@FreeBSD.org
COMMENT=	Setup social authentication/authorization mechanism for Django

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django18>=0:www/py-django18@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}python-social-auth>=0:security/py-python-social-auth@${FLAVOR}

DEPRECATED=	no support for new django	
EXPIRATION_DATE=	2018-08-01

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
