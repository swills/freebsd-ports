# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: head/devel/py-capstone/Makefile 418316 2016-07-10 12:57:26Z pi $

PORTNAME=	capstone
PORTVERSION=	3.0.4
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	python	# Conflicts with devel/capstone distfile

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Python bindings for the Capstone Disassembly Engine

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.TXT

LIB_DEPENDS=	libcapstone.so:devel/capstone3

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
