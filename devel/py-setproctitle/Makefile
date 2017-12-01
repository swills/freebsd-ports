# Created by: Sofian Brabez <sbrabez@gmail.com>
# $FreeBSD: head/devel/py-setproctitle/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	setproctitle
PORTVERSION=	1.1.10
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sbz@FreeBSD.org
COMMENT=	Python module to customize the process title

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

USES=		python
USE_PYTHON=	autoplist distutils

PORTDOCS=	HISTORY.rst README.rst

OPTIONS_DEFINE=	DOCS

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/setproctitle.so

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

do-test:
	@cd ${WRKSRC}/tests && ${PYTHON_CMD} ${WRKSRC}/tests/setproctitle_test.py

.include <bsd.port.mk>
