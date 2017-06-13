# Created by: Li-Wen Hsu <lwhsu@lwhsu.org>
# $FreeBSD: head/math/py-igraph/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	igraph
PORTVERSION=	0.7.0
CATEGORIES=	math python
MASTER_SITES=	http://igraph.org/nightly/get/python/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	python-${PORTNAME}-${PORTVERSION}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	High performance graph data structures and algorithms

BUILD_DEPENDS=	${LOCALBASE}/lib/libigraph.so:math/igraph

USES=		python
USE_PYTHON=	distutils autoplist
USE_GNOME=	libxml2

.include <bsd.port.mk>
