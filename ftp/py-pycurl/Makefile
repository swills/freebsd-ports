# Created by: Hye-Shik Chang
# $FreeBSD: head/ftp/py-pycurl/Makefile 426448 2016-11-19 17:06:53Z sunpoet $

PORTNAME=	pycurl
PORTVERSION=	7.43.0
CATEGORIES=	ftp python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Python interface to libcurl

LICENSE=	LGPL21 MIT
LICENSE_COMB=	dual
LICENSE_LGPL21=	${WRKSRC}/COPYING-LGPL
LICENSE_MIT=	${WRKSRC}/COPYING-MIT

LIB_DEPENDS=	libcurl.so:ftp/curl

USE_PYTHON=	autoplist concurrent distutils
USES=		python ssl

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/${PORTNAME}.so

.include <bsd.port.mk>
