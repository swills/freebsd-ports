# Created by: Tom Judge <tj@FreeBSD.org>
# $FreeBSD: head/www/py-django-social-auth/Makefile 455210 2017-11-30 15:50:30Z mat $

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

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
