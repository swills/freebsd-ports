# Created by: Kozlov Sergey <kozlov.sergey.404@gmail.com>
# $FreeBSD: head/www/py-django-tinymce/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	django-tinymce
PORTVERSION=	2.7.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kozlov.sergey.404@gmail.com
COMMENT=	Django application to use TinyMCE editor

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django111>=1.11:www/py-django111@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils
NO_ARCH=	yes

PORTDOCS=	*.rst

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/*.rst ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
