# $FreeBSD: head/multimedia/py-cec/Makefile 458818 2018-01-12 11:21:07Z rene $

PORTNAME=	cec
PORTVERSION=	0.2.6
CATEGORIES=	multimedia python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python bindings for libcec

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libcec.so:multimedia/libcec

USES=		python:2.7
USE_PYTHON=	distutils autoplist

CPPFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
