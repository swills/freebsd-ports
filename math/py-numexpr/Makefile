# Created by: Ju Pengfei <ju.pengfei@gmail.com>
# $FreeBSD: head/math/py-numexpr/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	numexpr
PORTVERSION=	2.6.4
PORTREVISION=	1
CATEGORIES=	math python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Fast numerical array expression evaluator for Python and NumPy

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}numpy>=1.7,1:math/py-numpy@${FLAVOR}
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PYTHON=	autoplist concurrent distutils
USES=		dos2unix python

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/numexpr/interpreter.so

.include <bsd.port.mk>
