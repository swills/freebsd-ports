# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/security/bearssl/Makefile 477665 2018-08-20 17:20:04Z bapt $

PORTNAME=	bearssl
PORTVERSION=	0.6
CATEGORIES=	security devel
MASTER_SITES=	https://bearssl.org/

MAINTAINER=	bapt@FreeBSD.org
COMMENT=	Implementation of TLS/SSL in C

LICENSE=	MIT
LIBBEARSSL=	libbearssl.so.0

MAKE_ARGS=	CC="${CC}" LD="${CC}" CFLAGS="${CFLAGS} -fPIC" LDDLL="${CC}" LDDLLFLAGS="-shared -Wl,-soname=${LIBBEARSSL}" \
		BEARSSLDLL=${LIBBEARSSL}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/build/brssl ${STAGEDIR}${PREFIX}/bin/
	${INSTALL_LIB} ${WRKSRC}/${LIBBEARSSL} ${STAGEDIR}${PREFIX}/lib/
	${RLN} ${STAGEDIR}${PREFIX}/lib/${LIBBEARSSL} ${STAGEDIR}${PREFIX}/lib/libbearssl.so
	(cd ${WRKSRC}/inc && ${COPYTREE_SHARE} \* ${STAGEDIR}${PREFIX}/include)

.include <bsd.port.mk>
