# Created by: Tom Judge <tj@FreeBSD.org>
# $FreeBSD: head/www/py-django-recaptcha/Makefile 427571 2016-12-02 16:18:47Z tj $

PORTNAME=	recaptcha
PORTVERSION=	1.1.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}django-
DISTNAME=	django-${PORTNAME}-${PORTVERSION}

MAINTAINER=	tj@FreeBSD.org
COMMENT=	Django reCAPTCHA form field/widget integration app

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django18>=0:www/py-django18

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
