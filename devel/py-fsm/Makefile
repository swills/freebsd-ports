# $FreeBSD: head/devel/py-fsm/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	fsm
PORTVERSION=	0.01
PORTREVISION=	2
CATEGORIES=	devel python

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Pure Python Implementation of a Finite State Machine

LICENSE=	BSD3CLAUSE

USE_GITHUB=	yes
GH_ACCOUNT=	oozie
GH_PROJECT=	python-fsm
GH_TAGNAME=	bf888123

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pygraphviz>=1.0:graphics/py-pygraphviz@${PY_FLAVOR}

USES=		python:2.7
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
