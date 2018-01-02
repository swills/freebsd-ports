# Created by: Carlo Strub
# $FreeBSD: head/devel/py-testtools/Makefile 457493 2017-12-29 03:44:46Z wen $

PORTNAME=	testtools
PORTVERSION=	2.3.0
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	johannes@perceivon.net
COMMENT=	Extensions to the Python library's unit testing framework

LICENSE=	MIT

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pbr>=1.3:devel/py-pbr@${FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}extras>=0.0.3:devel/py-extras@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}traceback2>=0:devel/py-traceback2@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist concurrent

OPTIONS_DEFINE=	DOCS

PORTDOCS=	api.rst for-framework-folk.rst for-test-authors.rst hacking.rst \
		index.rst overview.rst twisted-support.rst

post-install-DOCS-on:
		${MKDIR} ${STAGEDIR}${DOCSDIR}
		${CP} ${WRKSRC}/doc/*.rst ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
