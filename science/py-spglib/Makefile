# $FreeBSD: head/science/py-spglib/Makefile 477482 2018-08-18 07:25:40Z yuri $

PORTNAME=	spglib
DISTVERSION=	1.10.4.1
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
