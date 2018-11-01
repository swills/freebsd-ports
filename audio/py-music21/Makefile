# $FreeBSD: head/audio/py-music21/Makefile 483637 2018-11-01 05:08:53Z yuri $

PORTNAME=	music21
DISTVERSION=	5.5.0
CATEGORIES=	audio python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Toolkit for computer-aided musical analysis

LICENSE=	BSD3CLAUSE GPLv3
LICENSE_COMB=	multi
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}matplotlib>0:math/py-matplotlib@${PY_FLAVOR}

USES=		python:3.5+
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
