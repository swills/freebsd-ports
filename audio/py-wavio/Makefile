# $FreeBSD: head/audio/py-wavio/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	wavio
DISTVERSION=	0.0.4
PORTREVISION=	1
CATEGORIES=	audio python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Python module for reading and writing WAV files using numpy arrays

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYNUMPY}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
