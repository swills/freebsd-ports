# $FreeBSD$

PORTNAME=	jiri
PORTVERSION=	0.0.0.2017.12.28.1
CATEGORIES=	devel
MASTER_SITES=	LOCAL/swills

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Tool for multi-repo development

BUILD_DEPENDS=	go:lang/go \
		cmake:devel/cmake \
		ninja:devel/ninja

G2GVDIR=	${WRKSRC}/go/src/fuchsia.googlesource.com/jiri/vendor/github.com/libgit2/git2go/vendor
CMAKE_FLAGS=	-GNinja -DCMAKE_MAKE_PROGRAM=ninja -DCMAKE_BUILD_TYPE=Release
GITHASH=	4dd4e795852ff6583d85618165cc67022540530a
TIMESTAMP=	2017-12-28T00:00:00.000000

NO_WRKSUBDIR=	yes

USES=		perl5
USE_PERL5=	build

PLIST_FILES=	bin/jiri

do-build:
	${MKDIR} ${G2GVDIR}/zlib/build
	cd ${G2GVDIR}/zlib/build && \
		${SETENV} HOME=${WRKSRC} cmake ${CMAKE_FLAGS} -DCMAKE_C_FLAGS=-fPIC .. && \
		ninja zlibstatic
	${MKDIR} ${G2GVDIR}/boringssl/build
	cd ${G2GVDIR}/boringssl/build && \
		cmake ${CMAKE_FLAGS} -DCMAKE_C_FLAGS=-fPIC .. && \
		ninja
	${MKDIR} ${G2GVDIR}/libssh2/build
	cd ${G2GVDIR}/libssh2/build && \
		${SETENV} HOME=${WRKSRC} cmake ${CMAKE_FLAGS} -DBUILD_SHARED_LIBS=OFF \
			-DENABLE_ZLIB_COMPRESSION=ON -DBUILD_EXAMPLES=OFF \
			-DBUILD_TESTING=OFF -DCRYPTO_BACKEND=OpenSSL \
			-DOPENSSL_INCLUDE_DIR=${G2GVDIR}/boringssl/include \
			-DOPENSSL_SSL_LIBRARY=${G2GVDIR}/boringssl/build/ssl/libssl.a \
			-DOPENSSL_CRYPTO_LIBRARY=${G2GVDIR}/boringssl/build/crypto/libcrypto.a .. && \
		ninja
	${MKDIR} ${G2GVDIR}/curl/build
	cd ${G2GVDIR}/curl/build && \
		${SETENV} HOME=${WRKSRC} cmake ${CMAKE_FLAGS} -DBUILD_CURL_EXE=OFF -DBUILD_TESTING=OFF \
			-DCURL_STATICLIB=ON -DHTTP_ONLY=ON \
			-DCMAKE_USE_OPENSSL=ON -DCMAKE_USE_LIBSSH2=OFF \
			-DENABLE_UNIX_SOCKETS=OFF \
			-DOPENSSL_INCLUDE_DIR=${G2GVDIR}/boringssl/include \
			-DOPENSSL_SSL_LIBRARY=${G2GVDIR}/boringssl/build/ssl/libssl.a \
			-DOPENSSL_CRYPTO_LIBRARY=${G2GVDIR}/boringssl/build/crypto/libcrypto.a \
			-DHAVE_OPENSSL_ENGINE_H=OFF .. && \
		ninja
	${MKDIR} ${G2GVDIR}/libgit2/build
	cd ${G2GVDIR}/libgit2/build && \
		${SETENV} HOME=${WRKSRC} cmake ${CMAKE_FLAGS} -DCMAKE_C_FLAGS=-fPIC -DTHREADSAFE=ON \
			-DBUILD_CLAR=OFF -DBUILD_SHARED_LIBS=OFF \
			-DOPENSSL_INCLUDE_DIR=${G2GVDIR}/boringssl/include \
			-DOPENSSL_SSL_LIBRARY=${G2GVDIR}/boringssl/build/ssl/libssl.a \
			-DOPENSSL_CRYPTO_LIBRARY=${G2GVDIR}/boringssl/build/crypto/libcrypto.a \
			-DCURL_INCLUDE_DIRS="${G2GVDIR}/curl/build/include/curl;${G2GVDIR}/curl/include" \
			-DCURL_LIBRARIES=${G2GVDIR}/curl/build/libcurl.a \
			-DZLIB_INCLUDE_DIR="${G2GVDIR}/zlib;${G2GVDIR}/zlib/build" \
			-DZLIB_LIBRARY_RELEASE=${G2GVDIR}/zlib/build/libz.a .. && \
		ninja
	cd ${WRKSRC}/go/src/fuchsia.googlesource.com/jiri && \
		${SETENV} GOPATH=${WRKSRC}/go \
			go build -ldflags "-s -w -X \"fuchsia.googlesource.com/jiri/version.GitCommit=${GITHASH}\" -X \"fuchsia.googlesource.com/jiri/version.BuildTime=${TIMESTAMP}\"" -a -o jiri fuchsia.googlesource.com/jiri/cmd/jiri

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/go/src/fuchsia.googlesource.com/jiri/jiri ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
