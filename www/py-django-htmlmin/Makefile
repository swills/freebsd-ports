# Created by: Dmitry Sivachenko <mitya@yandex-team.ru>
# $FreeBSD: head/www/py-django-htmlmin/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	django-htmlmin
PORTVERSION=	0.9.1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	demon@FreeBSD.org
COMMENT=	HTML minifier for Python

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/bs4/element.py:www/py-beautifulsoup@${FLAVOR} \
		${PYTHON_SITELIBDIR}/html5lib/html5parser.py:www/py-html5lib@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
