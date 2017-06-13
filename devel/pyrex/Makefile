# Created by: Hye-Shik Chang
# $FreeBSD: head/devel/pyrex/Makefile 432574 2017-01-27 20:52:32Z sunpoet $

PORTNAME=	pyrex
PORTVERSION=	0.9.9
CATEGORIES=	devel lang python
MASTER_SITES=	http://www.cosc.canterbury.ac.nz/greg.ewing/python/Pyrex/
PKGNAMEPREFIX=	${PYTHONPKGNAMEPREFIX}
DISTNAME=	Pyrex-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Programming Language for writing Python extension modules

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

OPTIONS_DEFINE=	DOCS EXAMPLES

USE_PYTHON=	autoplist distutils
USES=		python:2

PORTDOCS=	*
PORTEXAMPLES=	*

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}/
	cd ${WRKSRC}/Doc/ && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR}/

post-install-EXAMPLES-on:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}/
	cd ${WRKSRC}/Demos && ${MAKE} clean && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
