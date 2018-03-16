# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: head/math/py-gnuplot/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	gnuplot
PORTVERSION=	1.8
PORTREVISION=	8
CATEGORIES=	math python
MASTER_SITES=	SF/${PORTNAME}-py/Gnuplot-py/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	gnuplot-py-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python interface to gnuplot plotting program

LICENSE=	LGPL21

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS=	gnuplot:math/gnuplot \
		${PYNUMPY}

USES=		python:2.7
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	@(cd ${WRKSRC}/doc && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
