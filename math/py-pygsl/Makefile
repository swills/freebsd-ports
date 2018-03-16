# Created by: Hye-Shik Chang <perky@fallin.lv>
# $FreeBSD: head/math/py-pygsl/Makefile 464428 2018-03-13 20:32:15Z sunpoet $

PORTNAME=	pygsl
PORTVERSION=	2.3.0
PORTREVISION=	1
CATEGORIES=	math python
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Python interface to GNU Scientific Library

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${PYNUMPY}
LIB_DEPENDS=	libgsl.so:math/gsl
RUN_DEPENDS=	${PYNUMPY}

USES=		python
USE_PYTHON=	autoplist concurrent distutils

post-install:
	${FIND} ${STAGEDIR}${PYTHON_SITELIBDIR} -name '*.so' -exec ${STRIP_CMD} {} +

.include <bsd.port.mk>
