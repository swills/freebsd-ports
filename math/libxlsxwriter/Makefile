# $FreeBSD: head/math/libxlsxwriter/Makefile 448479 2017-08-21 15:46:54Z bapt $

PORTNAME=	libxlsxwriter
PORTVERSION=	0.7.4
DISTVERSIONPREFIX=	RELEASE_
CATEGORIES=	math devel

MAINTAINER=	bapt@FreeBSD.org
COMMENT=	C library for creating Excel XLSX files

LICENSE=	BSD2CLAUSE

USE_GITHUB=	yes
GH_ACCOUNT=	jmcnamara
MAKE_ARGS=	INSTALL_DIR=${STAGEDIR}${PREFIX}

USE_LDCONFIG=	yes
USES=		gmake

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libxlsxwriter.so.0
	${LN} -s libxlsxwriter.so.0 ${STAGEDIR}${PREFIX}/lib/libxlsxwriter.so

.include <bsd.port.mk>
