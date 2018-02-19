# Created by: Radek Kozlowski <radek@raadradd.com>
# $FreeBSD: head/textproc/pychm/Makefile 462307 2018-02-19 11:10:43Z antoine $

PORTNAME=	pychm
PORTVERSION=	0.8.4
PORTREVISION=	2
CATEGORIES=	textproc python
MASTER_SITES=	SF/gnochm/${PORTNAME}/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Bindings for CHMLIB library

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libchm.so:misc/chmlib

NO_BUILD=	yes
USES=		python:2.7
USE_PYTHON=	autoplist distutils

.include <bsd.port.pre.mk>

PYDISTUTILS_INSTALLARGS:=	${PYDISTUTILS_INSTALLARGS} build_ext -I${LOCALBASE}/include -L${LOCALBASE}/lib

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/chm/*.so

.include <bsd.port.post.mk>
