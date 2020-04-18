# Created by: Carlo Strub
# $FreeBSD$

PORTNAME=	django-markdownx
PORTVERSION=	3.0.1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Django Markdown editor with image uploads and live preview

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django22>0:www/py-django22@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}markdown>0:textproc/py-markdown@${PY_FLAVOR} \
		${PY_PILLOW}

USES=		python:3.5+
# Force an UTF-8 environment to avoid failures in the configuration phase for
# Python versions <= 3.6
USE_LOCALE=	en_US.UTF-8
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
