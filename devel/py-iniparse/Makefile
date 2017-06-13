# Created by: Yi-Jheng Lin <yzlin@cs.nctu.edu.tw>
# $FreeBSD: head/devel/py-iniparse/Makefile 422140 2016-09-14 15:59:34Z mat $

PORTNAME=	iniparse
PORTVERSION=	0.4
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Better INI parser for Python

OPTIONS_DEFINE=	DOCS

USES=		python
USE_PYTHON=	distutils autoplist

PORTDOCS=	Changelog README
DOCSDIR=	${PREFIX}/share/doc/py-${PORTNAME}

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
