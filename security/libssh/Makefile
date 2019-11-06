# Created by: Alexander Logvinov <ports@logvinov.com>
# $FreeBSD$

PORTNAME=	libssh
DISTVERSION=	0.9.1
CATEGORIES=	security devel
MASTER_SITES=	https://www.libssh.org/files/0.9/

MAINTAINER=	phascolarctos@protonmail.ch
COMMENT=	Library implementing the SSH2 protocol

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cmake cpe tar:xz
USE_LDCONFIG=	yes

CMAKE_ARGS=	-DWITH_EXAMPLES:BOOL=OFF

OPTIONS_DEFINE=	GSSAPI STATIC ZLIB
OPTIONS_RADIO=	CRYPTO
OPTIONS_RADIO_CRYPTO=	GCRYPT OPENSSL
OPTIONS_DEFAULT=	GSSAPI OPENSSL STATIC ZLIB
OPTIONS_SUB=	yes

GCRYPT_LIB_DEPENDS=	libgcrypt.so:security/libgcrypt \
			libgpg-error.so:security/libgpg-error
GCRYPT_CMAKE_BOOL=	WITH_GCRYPT
GSSAPI_CMAKE_BOOL=	WITH_GSSAPI
OPENSSL_USES=		ssl
STATIC_CMAKE_BOOL=	WITH_STATIC_LIB
ZLIB_CMAKE_BOOL=	WITH_ZLIB

post-patch:
	${RM} ${PATCH_WRKSRC}/cmake/Modules/UseDoxygen.cmake
	${REINPLACE_CMD} \
		-e 's|LIB_INSTALL_DIR}|CMAKE_INSTALL_PREFIX}/libdata|' \
		-e 's|CMAKE_INSTALL_DIR}|CMAKE_INSTALL_DIR}/libssh|' \
		${WRKSRC}/CMakeLists.txt
#	${REINPLACE_CMD} -e 's|-lssh_threads|-lssh_threads -lpthread|' \
#		${WRKSRC}/libssh_threads.pc.cmake
	${REINPLACE_CMD} -e 's| -pedantic-errors||' \
		${WRKSRC}/cmake/Modules/DefineCompilerFlags.cmake

.include <bsd.port.mk>
