# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/math/py-nzmath/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	nzmath
PORTVERSION=	1.2.0
CATEGORIES=	math python
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/NZMATH-${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	NZMATH-${PORTVERSION}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Number theory oriented calculation system

USES=		python:2.7
USE_PYTHON=	distutils
PYDISTUTILS_PKGNAME=	NZMATH

OPTIONS_DEFINE=	DOCS

post-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/data/discriminant.csv ${STAGEDIR}${DATADIR}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/manual/*.pdf ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
