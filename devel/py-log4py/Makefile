# Created by: ijliao
# $FreeBSD: head/devel/py-log4py/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	log4py
PORTVERSION=	1.3
CATEGORIES=	devel python
MASTER_SITES=	SF
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	xride@FreeBSD.org
COMMENT=	Python logging module

LICENSE=	MIT

USES=		python:2.7
USE_PYTHON=	distutils

OPTIONS_DEFINE=	DOCS

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${CP} -R ${WRKSRC}/doc/* ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
