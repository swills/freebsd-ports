# Created by: Tom Judge <tj@FreeBSD.org>
# $FreeBSD: head/www/py-django-recaptcha/Makefile 471381 2018-06-02 17:30:24Z miwi $

PORTNAME=	recaptcha
PORTVERSION=	1.4.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}django-
DISTNAME=	django-${PORTNAME}-${PORTVERSION}

MAINTAINER=	tj@FreeBSD.org
COMMENT=	Django reCAPTCHA form field/widget integration app

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django111>=0:www/py-django111@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
