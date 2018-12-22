# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/devel/py-cclib/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	cclib
PORTVERSION=	1.5.3
PORTREVISION=	1
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
