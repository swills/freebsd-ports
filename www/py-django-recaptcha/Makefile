# Created by: Tom Judge <tj@FreeBSD.org>
# $FreeBSD: head/www/py-django-recaptcha/Makefile 484353 2018-11-06 21:13:54Z rene $

PORTNAME=	recaptcha
PORTVERSION=	1.4.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}django-
DISTNAME=	django-${PORTNAME}-${PORTVERSION}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Django reCAPTCHA form field/widget integration app

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django111>=0:www/py-django111@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
