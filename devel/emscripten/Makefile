PORTNAME=emscripten
PKGNAMESUFFIX=-devel
DISTVERSION=1.39.18
CATEGORIES=devel
MAINTAINER=kpedersen@gmx.com
COMMENT=Toolchain for compiling to asm.js and WebAssembly

LICENSE=APACHE20 MIT NCSA
LICENSE_COMB=multi

BINARYEN_COMMIT=d26f90b
EMSCRIPTEN_COMMIT=d9b71c8
LLVM_COMMIT=f8170d8

CONFLICTS_INSTALL=emscripten-[0-9]*

USES=python

BUILD_DEPENDS= \
	${LOCALBASE}/bin/cmake:devel/cmake

RUN_DEPENDS= \
	${LOCALBASE}/bin/node:www/node

USE_GITHUB=yes
GH_TUPLE= \
	WebAssembly:binaryen:$(BINARYEN_COMMIT):BINARYEN \
	llvm:llvm-project:$(LLVM_COMMIT):LLVM \
	emscripten-core:emscripten:$(EMSCRIPTEN_COMMIT)

do-configure:
	cd ${WRKSRC_BINARYEN} && mkdir build && cd build && \
		cmake .. \
		-DCMAKE_BUILD_TYPE=Release \
		-DCMAKE_INSTALL_PREFIX=${STAGEDIR}${PREFIX}/lib/${PORTNAME}/binaryen

	cd ${WRKSRC_LLVM} && mkdir build && cd build && \
		cmake ../llvm \
		-DCMAKE_BUILD_TYPE=Release \
		-DCMAKE_INSTALL_PREFIX=${STAGEDIR}${PREFIX}/lib/${PORTNAME}/llvm \
		-DLLVM_ENABLE_PROJECTS='lld;clang' \
		-DLLVM_TARGETS_TO_BUILD="host;WebAssembly" \
		-DLLVM_INCLUDE_EXAMPLES=OFF -DLLVM_INCLUDE_TESTS=OFF

do-build:
	cd ${WRKSRC_BINARYEN}/build && \
		cmake --build .

	cd ${WRKSRC_LLVM}/build && \
		cmake --build .

do-install:
	cp -r ${WRKSRC} ${STAGEDIR}${PREFIX}/lib/${PORTNAME}

	cat ${SCRIPTDIR}/run_python.sh > ${STAGEDIR}${PREFIX}/lib/${PORTNAME}/tools/run_python.sh

	cd ${STAGEDIR}${PREFIX}/lib/${PORTNAME} && \
		${PYTHON_CMD} tools/create_entry_points.py

	@rm -r -f ${STAGEDIR}${PREFIX}/lib/${PORTNAME}/.* || true
	rm -r -f ${STAGEDIR}${PREFIX}/lib/${PORTNAME}/*.bat

	cat ${SCRIPTDIR}/emcc > ${STAGEDIR}${PREFIX}/bin/emcc
	chmod ugo+x ${STAGEDIR}${PREFIX}/bin/emcc
	cd ${STAGEDIR}${PREFIX}/bin && \
		ln -s emcc em++ && \
		ln -s emcc emar && \
		ln -s emcc emcmake && \
		ln -s emcc emconfigure && \
		ln -s emcc emmake && \
		ln -s emcc emranlib && \
		ln -s emcc emrun && \
		ln -s emcc emscons && \
		ln -s emcc emsize

	cd ${WRKSRC_BINARYEN}/build && \
		cmake --build . --target install

	cd ${WRKSRC_LLVM}/build && \
		cmake --build . --target install

.include <bsd.port.mk>
# $FreeBSD$

PORTNAME=	emscripten
DISTVERSION=	1.39.18
CATEGORIES=	devel www

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	LLVM-to-Web Compiler

LICENSE=	MIT NCSA
LICENSE_COMB=	dual

RUN_DEPENDS=	llvm-devel>0:devel/llvm-devel \
		node:www/node \
		bash:shells/bash \
		binaryen>0:devel/binaryen
		# the upstream requires to use either the latest llvm version, or their own llvm fork called emscripten-fastcomp

USES=		python shebangfix
USE_GITHUB=	yes
GH_ACCOUNT=	emscripten-core
GH_PROJECT=	emscripten
SHEBANG_FILES=	${PYSCRIPTS} emcmake tools/emdump system/bin/sdl-config system/bin/sdl2-config third_party/websockify/run
SHEBANG_GLOB=	*.py *.sh

PYSCRIPTS=	em++ emar emcc emconfigure emmake emranlib emrun emscons

NO_BUILD=	yes
NO_ARCH=	yes

PORTSCOUT=	limit:^\d+\. # prevent i64

post-patch:
	@${REINPLACE_CMD} -i '' -E " \
			s|BINARYEN_ROOT = None|BINARYEN_ROOT = '${LOCALBASE}'| ; \
			s|LLVM_ROOT = None|LLVM_ROOT = '${LOCALBASE}'| ; \
			s|LLVM_ADD_VERSION = None|LLVM_ADD_VERSION = 'devel'| ; \
			s|CLANG_ADD_VERSION = None|CLANG_ADD_VERSION = 'devel'| ; \
			s|^__rootpath__ = .*|__rootpath__ = '${PREFIX}/lib/${PORTNAME}'| ; \
			s|find_executable\('llvm-dis'\) or '/usr/bin/llvm-dis'|'${LOCALBASE}/bin/llvm-dis'|" \
			${WRKSRC}/tools/shared.py
	@${REINPLACE_CMD} -i '' -E " \
			s|os.getenv\('BINARYEN', ''\)|os.getenv('BINARYEN', '${LOCALBASE}')|" \
			${WRKSRC}/tools/settings_template.py

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/${PORTNAME}
	cd ${WRKSRC} && ${CP} -r em* cmake site src system third_party tools ${STAGEDIR}${PREFIX}/lib/${PORTNAME}/
	${FIND} ${STAGEDIR}${PREFIX}/lib/${PORTNAME} \( -name "*.bat" -o -name "*.orig" \) -delete
.for s in ${PYSCRIPTS}
	${RLN} ${STAGEDIR}${PREFIX}/lib/${PORTNAME}/${s} ${STAGEDIR}${PREFIX}/bin/${s}
.endfor
	${RM} -rf ${STAGEDIR}${PREFIX}/lib/emscripten/system/lib/pkgconfig
	${RM} -rf ${STAGEDIR}${PREFIX}/lib/emscripten/tools/websocket_to_posix_proxy

.include <bsd.port.mk>
