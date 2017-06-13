# Created by: Yi-Jheng Lin <yzlin@cs.nctu.edu.tw>
# $FreeBSD: head/graphics/py-graph/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	graph
PORTVERSION=	1.8.2
CATEGORIES=	graphics python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	demon@FreeBSD.org
COMMENT=	Library for working with graphs in Python

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}graph-core>=${PORTVERSION}:graphics/py-graph-core \
		${PYTHON_PKGNAMEPREFIX}graph-dot>=${PORTVERSION}:graphics/py-graph-dot

USES=		metaport python

.include <bsd.port.mk>
