# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/converters/zbase32/Makefile 412344 2016-04-01 13:29:15Z mat $

PORTNAME=	zbase32
PORTVERSION=	1.1.5
PORTREVISION=	1
CATEGORIES=	converters python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Base32 Encoder/Decoder

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools_darcs>=1.2.11:devel/py-setuptools_darcs
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
