# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/devel/py-yappi/Makefile 432757 2017-01-29 15:30:46Z amdmi3 $

PORTNAME=	yappi
PORTVERSION=	0.98
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	johannes@perceivon.net
COMMENT=	Yet Another Python Profiler

LICENSE=	MIT

OPTIONS_DEFINE=	DOCS

PORTDOCS=	*

USES=		python
USE_PYTHON=	distutils concurrent autoplist

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.md ${STAGEDIR}${DOCSDIR}

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/_yappi.so

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
