# $FreeBSD: head/science/py-spglib/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	spglib
DISTVERSION=	1.11.1
PORTREVISION=	1
DISTVERSIONSUFFIX=	.post3
CATEGORIES=	science python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Library for finding and handling crystal symmetries (python binding)

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS=	${PYNUMPY}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
