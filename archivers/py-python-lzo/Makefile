# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/archivers/py-python-lzo/Makefile 471007 2018-05-27 21:36:20Z yuri $

PORTNAME=	python-lzo
DISTVERSION=	1.12
CATEGORIES=	archivers python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Python bindings for the LZO data compression library

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	liblzo2.so:archivers/lzo2

USES=		localbase python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
