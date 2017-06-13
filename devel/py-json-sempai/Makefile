# $FreeBSD: head/devel/py-json-sempai/Makefile 407792 2016-02-02 02:18:32Z swills $

PORTNAME=	json-sempai
PORTVERSION=	0.4.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Pythonic argument parser, that will make you smile

LICENSE=	MIT

USES=		python
USE_PYTHON=	distutils autoplist

PORTDOCS=	README.rst
DOCSDIR=	${PREFIX}/share/doc/py-${PORTNAME}

OPTIONS_DEFINE=	DOCS

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
