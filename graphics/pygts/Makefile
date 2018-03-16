# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/graphics/pygts/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	pygts
PORTVERSION=	0.3.1
PORTREVISION=	6
CATEGORIES=	graphics python
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python binding for GNU Triangulated Surface(GTS) Library

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS=	${PYNUMPY}
LIB_DEPENDS=	libgts.so:graphics/gts

USE_PYTHON=	autoplist distutils
USES=		pkgconfig python:2.7

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/gts/_gts.so

.include <bsd.port.mk>
