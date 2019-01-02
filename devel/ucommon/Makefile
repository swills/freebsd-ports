# Created by: gahr
# $FreeBSD: head/devel/ucommon/Makefile 488341 2018-12-25 20:25:39Z tcberner $

PORTNAME=	ucommon
PORTVERSION=	7.0.0
PORTREVISION=	4
CATEGORIES=	devel
MASTER_SITES=	GNU/commoncpp

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Very lightweight C++ design pattern library

LICENSE=	LGPL3
LICENSE_FILE=	${WRKSRC}/COPYING.LESSER

BROKEN_SSL=	openssl111
BROKEN_SSL_REASON_openssl111=	error: allocation of incomplete type 'EVP_CIPHER_CTX'

USES=		compiler:c++11-lib cmake pathfix pkgconfig ssl
CMAKE_ARGS=	-DBUILD_TESTING:BOOL=ON \
		-DCMAKE_INSTALL_BINDIR:STRING=bin/${PORTNAME}
USE_LDCONFIG=	yes
TEST_TARGET=	test

post-install:
	${INSTALL_DATA} ${BUILD_WRKSRC}/ucommon-config.h ${STAGEDIR}${PREFIX}/include/ucommon

.include <bsd.port.mk>
