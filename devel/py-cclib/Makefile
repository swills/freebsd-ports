# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/devel/py-cclib/Makefile 472554 2018-06-16 15:46:37Z robak $

PORTNAME=	cclib
PORTVERSION=	1.5.3
DISTVERSIONPREFIX=	v
CATEGORIES=	devel python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	robak@FreeBSD.org
COMMENT=	Parsers And Algorithms For Computational Chemistry

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS=	${PYNUMPY}

USES=		python
USE_PYTHON=	autoplist distutils

USE_GITHUB=	yes

.include <bsd.port.mk>
