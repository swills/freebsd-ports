# Created by: Gerhard Gonter <g.gonter@ieee.org>
# $FreeBSD: head/lang/py-prolog/Makefile 454458 2017-11-18 20:30:35Z mat $

PORTNAME=	prolog
PORTVERSION=	0.1
PORTREVISION=	3
CATEGORIES=	lang python
MASTER_SITES=	SF/py${PORTNAME}/PyProlog/PyProlog-${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	PyProlog-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python extension embedding SWI-Prolog

BUILD_DEPENDS=	swipl:lang/swi-pl
RUN_DEPENDS=	swipl:lang/swi-pl

BROKEN_amd64=	fails to build: can't link shared libraries to static

USES=		python:2.7
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
