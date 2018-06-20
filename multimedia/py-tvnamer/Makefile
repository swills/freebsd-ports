# Created by: Mario Sergio Fujikawa Ferreira <lioux@FreeBSD.org>
# $FreeBSD: head/multimedia/py-tvnamer/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	tvnamer
PORTVERSION=	2.4
CATEGORIES=	multimedia python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Automatically names downloaded/recorded TV-episode

LICENSE=	GPLv2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}tvdb_api>=1.5:www/py-tvdb_api@${PY_FLAVOR}
BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}tvdb_api>=1.5:www/py-tvdb_api@${PY_FLAVOR}

USES=		python:2.7
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
