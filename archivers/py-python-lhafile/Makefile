# Created by: Carsten Larsen <cs@innolan.dk>
# $FreeBSD: head/archivers/py-python-lhafile/Makefile 461548 2018-02-12 00:59:58Z yuri $

PORTNAME=	python-lhafile
DISTVERSION=	0.2.2
CATEGORIES=	archivers python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	lhafile-${DISTVERSION}

MAINTAINER=	cs@innolan.dk
COMMENT=	LHA(.lzh) file extract interface

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING.txt

USES=		python
USE_PYTHON=	distutils autoplist

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/lzhlib.so

.include <bsd.port.mk>
