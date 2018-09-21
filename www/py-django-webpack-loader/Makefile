# Created by: Richard Gallamore <ultima@FreeBSD.org>
# $FreeBSD: head/www/py-django-webpack-loader/Makefile 479944 2018-09-17 19:27:20Z ultima $

PORTNAME=	django-webpack-loader
PORTVERSION=	0.6.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ultima@FreeBSD.org
COMMENT=	Transparently use webpack with Django

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django111>=1.10.1:www/py-django111@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist concurrent
NO_ARCH=	yes

.include <bsd.port.mk>
