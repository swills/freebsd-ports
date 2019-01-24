# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/audio/py-pylast/Makefile 489935 2019-01-11 03:05:30Z wen $

PORTNAME=	pylast
PORTVERSION=	3.0.0
CATEGORIES=	audio python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python interface to Last.fm and Libre.fm

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six@${PY_FLAVOR}

USES=		python:3.5+
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
