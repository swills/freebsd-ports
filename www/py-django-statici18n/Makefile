# Created by: Ultima
# $FreeBSD: head/www/py-django-statici18n/Makefile 474583 2018-07-13 13:16:27Z ultima $

PORTNAME=	django-statici18n
PORTVERSION=	1.8.2
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ultima@FreeBSD.org
COMMENT=	Helper for generating Javascript catalog to static files

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django111>=0:www/py-django111@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}django-appconf>=0.6:www/py-django-appconf@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
