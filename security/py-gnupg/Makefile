# Created by: ijliao
# $FreeBSD: head/security/py-gnupg/Makefile 481846 2018-10-11 19:17:04Z cs $

PORTNAME=	gnupg
PORTVERSION=	3.1.1
CATEGORIES=	security python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Python wrapper for GnuPG

LICENSE=	GPLv3

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}psutil>=0.5.1:sysutils/py-psutil@${PY_FLAVOR}

USES=		python
USE_GITHUB=	yes
USE_PYTHON=	distutils autoplist

GH_ACCOUNT=	isislovecruft
GH_PROJECT=	python-gnupg

.include <bsd.port.mk>
