# $FreeBSD: head/multimedia/py-cec/Makefile 438756 2017-04-18 01:15:29Z kevlo $

PORTNAME=	cec
PORTVERSION=	0.2.5
PORTREVISION=	1
CATEGORIES=	multimedia python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kevlo@FreeBSD.org
COMMENT=	Python bindings for libcec

LICENSE=	GPLv2

LIB_DEPENDS=	libcec.so:multimedia/libcec

USES=		python
USE_PYTHON=	distutils autoplist

CPPFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
