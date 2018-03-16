# Created by: J.R. Oldroyd <fbsd@opal.com>
# $FreeBSD: head/multimedia/py-kaa-imlib2/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	kaa-imlib2
PORTVERSION=	0.2.3
PORTREVISION=	11
CATEGORIES=	multimedia python
MASTER_SITES=	SF/freevo/${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	fbsd@opal.com
COMMENT=	Kaa Media Repository - imlib2 wrapper for python

BUILD_DEPENDS=	${PYTHON_SITELIBDIR}/kaa/__init__.py:multimedia/py-kaa-base@${FLAVOR}
RUN_DEPENDS:=	${BUILD_DEPENDS}
LIB_DEPENDS=	libImlib2.so:graphics/imlib2

USES=		python:2.7
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
