# Created by: antoine@FreeBSD.org
# $FreeBSD: head/security/py-rekall/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	rekall
PORTVERSION=	1.6.0
PORTREVISION=	1
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Memory forensics analysis framework

LICENSE=	GPLv2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}rekall-core>=1.5.0.p:security/py-rekall-core@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}ipython>=5.0.0:devel/ipython@${FLAVOR}

NO_ARCH=	yes
USES=		python:2.7 zip
USE_PYTHON=	distutils autoplist

.include <bsd.port.pre.mk>

PYDISTUTILS_INSTALLARGS+=--install-data ${DATADIR}

.include <bsd.port.post.mk>
