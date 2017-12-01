# $FreeBSD: head/sysutils/py-stdiff/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	stdiff
PORTVERSION=	0.2.1
CATEGORIES=	sysutils python
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	araujo@FreeBSD.org
COMMENT=	Spot The Difference is a file integrity checker

USES=		python:2.7
USE_PYTHON=	distutils

OPTIONS_DEFINE=	DOCS

PORTDOCS=	*

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_MAN} ${WRKSRC}/INSTALL.txt ${STAGEDIR}/${DOCSDIR}/
	${INSTALL_MAN} ${WRKSRC}/LICENSE.txt ${STAGEDIR}/${DOCSDIR}/
	(cd ${WRKSRC}/ && ${COPYTREE_SHARE} docs ${STAGEDIR}${DOCSDIR}/)
.include <bsd.port.mk>
