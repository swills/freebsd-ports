# Created by: Carlo Strub
# $FreeBSD: head/security/nyx/Makefile 462227 2018-02-18 13:20:29Z antoine $

PORTNAME=	nyx
PORTVERSION=	2.0.4
CATEGORIES=	security net
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Command-line monitor for Tor

LICENSE=	GPLv3

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}stem>=1.6.0:security/py-stem@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}sqlite3>0:databases/py-sqlite3@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
