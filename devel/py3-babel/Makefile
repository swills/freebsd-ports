# Created by: Muhammad Moinur Rahman <bofh@FreeBSD.org>
# $FreeBSD: head/devel/py3-babel/Makefile 429357 2016-12-24 14:30:20Z antoine $

PORTNAME=	Babel
PORTVERSION=	2.3.4
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Collection of tools for internationalizing Python applications

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytz>0:devel/py3-pytz

USES=		python:3.3+
USE_PYTHON=	autoplist concurrent distutils
NO_ARCH=	yes

PORTDOCS=	docs/*

OPTIONS_DEFINE=	DOCS

do-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
.for docfile in ${PORTDOCS}
	${CP} -r ${WRKSRC}/${docfile} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
