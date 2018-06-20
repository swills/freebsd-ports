# $FreeBSD: head/science/py-scoria/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	scoria
DISTVERSION=	1.0.3
PORTREVISION=	1
CATEGORIES=	science python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Lightweight molecule manipulation codebase

LICENSE=	APACHE20

RUN_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}scipy>0:science/py-scipy@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
