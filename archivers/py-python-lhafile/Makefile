# Created by: Carsten Larsen <cs@innolan.dk>
# $FreeBSD: head/archivers/py-python-lhafile/Makefile 421451 2016-09-06 17:53:30Z amdmi3 $

PORTNAME=	python-lhafile
PORTVERSION=	0.2.1
CATEGORIES=	archivers python
MASTER_SITES=	http://fengestad.no/python-lhafile/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	cs@innolan.dk
COMMENT=	LHA(.lzh) file extract interface

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING.txt

USES=		python
USE_PYTHON=	distutils autoplist

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/lzhlib.so

.include <bsd.port.mk>
