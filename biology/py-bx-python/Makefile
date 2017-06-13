# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/biology/py-bx-python/Makefile 440232 2017-05-06 06:07:03Z miwi $

PORTNAME=	bx-python
PORTVERSION=	0.7.4
DISTVERSIONPREFIX=	v
CATEGORIES=	biology python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@rawbw.com
COMMENT=	Python module for reading, manipulating and writing genomic data sets

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}python-lzo>0:archivers/py-python-lzo
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_GITHUB=	yes
GH_ACCOUNT=	bxlab

USES=		compiler python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
