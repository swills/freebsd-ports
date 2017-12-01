# Created by: Dru Lavigne <dru@FreeBSD.org>
# $FreeBSD: head/textproc/py-sphinx_wikipedia/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	sphinx_wikipedia
PORTVERSION=	20150903
CATEGORIES=	textproc
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kris@FreeBSD.org
COMMENT=	Sphinx extension which adds role to create links to Wikipedia articles

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PKGNAMEPREFIX}sphinx>=1.3.1:textproc/py-sphinx@${FLAVOR}

USES=		python
USE_PYTHON=	flavors
NO_BUILD=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	quiver
GH_PROJECT=	sphinx-ext-wikipedia
GH_TAGNAME=	f6b2f6
PLIST_FILES=	${PYTHON_SITELIBDIR}/sphinx/ext/wikipedia.py

do-install:
	${MKDIR} ${STAGEDIR}${PYTHON_SITELIBDIR}/sphinx/ext
	${CP} ${WRKSRC}/sphinx-ext/wikipedia.py \
		 ${STAGEDIR}${PYTHON_SITELIBDIR}/sphinx/ext/wikipedia.py

.include <bsd.port.mk>
