# Created by: Wen Heping <wenhping@gmail.com>
# $FreeBSD: head/lang/cython/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	cython
PORTVERSION=	0.26
CATEGORIES=	lang python
MASTER_SITES=	http://www.cython.org/release/ \
		CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Cython-${PORTVERSION}

MAINTAINER=	vmagerya@gmail.com
COMMENT=	Compiler for Writing C Extensions for the Python Language

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt


USES=		python
USE_PYTHON=	autoplist distutils concurrent allflavors

post-install:
	${FIND} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/Cython \
		-name '*.so' -exec ${STRIP_CMD} {} +

.include <bsd.port.mk>
