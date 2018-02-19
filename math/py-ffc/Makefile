# $FreeBSD: head/math/py-ffc/Makefile 462307 2018-02-19 11:10:43Z antoine $

PORTNAME=	ffc
PORTVERSION=	${MMVERSION}.0
PORTREVISION=	1
CATEGORIES=	math python
MASTER_SITES=	https://launchpad.net/${PORTNAME}/${MMVERSION}.x/${PORTVERSION}/+download/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	jwb@FreeBSD.org
COMMENT=	C++ code generator for multilinear forms

LICENSE=	LGPL3

USES=		python:2.7
USE_PYTHON=	distutils
PYDISTUTILS_PKGNAME=	FFC

MMVERSION=	1.2

post-patch:
	${REINPLACE_CMD} -i '' -e 's|os.path.join(os.path.sep, "usr")|os.path.normpath("${PREFIX}")|' \
		 ${WRKSRC}/test/regression/test.py

.include <bsd.port.mk>
