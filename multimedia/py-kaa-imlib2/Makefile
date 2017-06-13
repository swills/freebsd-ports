# Created by: J.R. Oldroyd <fbsd@opal.com>
# $FreeBSD: head/multimedia/py-kaa-imlib2/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	kaa-imlib2
PORTVERSION=	0.2.3
PORTREVISION=	10
CATEGORIES=	multimedia python
MASTER_SITES=	SF/freevo/${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	fbsd@opal.com
COMMENT=	Kaa Media Repository - imlib2 wrapper for python

BUILD_DEPENDS=	${PYTHON_SITELIBDIR}/kaa/__init__.py:multimedia/py-kaa-base
RUN_DEPENDS:=	${BUILD_DEPENDS}
LIB_DEPENDS=	libImlib2.so:graphics/imlib2

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
