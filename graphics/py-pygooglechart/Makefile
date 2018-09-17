# Created by: Nicola Vitale	<nivit@FreeBSD.org>
# $FreeBSD: head/graphics/py-pygooglechart/Makefile 479407 2018-09-10 13:15:47Z mat $

PORTNAME=	pygooglechart
PORTVERSION=	0.3.0
PORTREVISION=	1
CATEGORIES=	graphics python
MASTER_SITES=	http://pygooglechart.slowchop.com/files/download/ \
		LOCAL/nivit/${PORTNAME}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	Complete Python wrapper for the Google Chart API

USES=		python:2.7
USE_PYTHON=	distutils autoplist

PORTEXAMPLES=	*
EXAMPLESDIR=	${PREFIX}/share/examples/${PKGNAMEPREFIX}${PORTNAME}

OPTIONS_DEFINE=	EXAMPLES

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR} && \
		cd ${WRKSRC}/examples && \
		${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
