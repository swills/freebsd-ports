# Created by: antoine@FreeBSD.org
# $FreeBSD: head/security/py-rekall/Makefile 431014 2017-01-09 18:56:08Z antoine $

PORTNAME=	rekall
PORTVERSION=	1.6.0
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Memory forensics analysis framework

LICENSE=	GPLv2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}rekall-core>=1.5.0.p:security/py-rekall-core \
		${PYTHON_PKGNAMEPREFIX}ipython>=5.0.0:devel/ipython

NO_ARCH=	yes
USES=		python:2.7 zip
USE_PYTHON=	distutils autoplist

.include <bsd.port.pre.mk>

PYDISTUTILS_INSTALLARGS+=--install-data ${DATADIR}

.include <bsd.port.post.mk>
