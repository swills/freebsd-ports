# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/www/py-django-picklefield/Makefile 472346 2018-06-13 22:05:51Z ultima $

PORTNAME=	django-picklefield
PORTVERSION=	1.0.0
PORTREVISION=	2
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Pickled object field for Django

LICENSE=	MIT

# Reminder: www/seahub depends on django, changing django version may break seahub
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django111>=0:www/py-django111@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils
NO_ARCH=	yes

PORTDOCS=	README.rst

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTDOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
