# $FreeBSD$

PORTNAME=	abc
DISTVERSION=	g20191026
CATEGORIES=	cad

MAINTAINER=	uddka@student.kit.edu
COMMENT=	System for sequential synthesis and verification

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/copyright.txt

USES=		cmake
USE_GITHUB=	yes
GH_ACCOUNT=	berkeley-abc
GH_TAGNAME=	f9309ce
USE_LDCONFIG=	yes

MAKE_ENV=	ABC_USE_STDINT_H=1 ABC_MAKE_VERBOSE=1

OPTIONS_DEFINE=	DEBUG READLINE THREADS
OPTIONS_DEFAULT=	READLINE THREADS

READLINE_USES=	readline
READLINE_MAKE_ENV=	ABC_READLINE_LIBRARIES="-L${LOCALBASE}/lib -lreadline"
READLINE_MAKE_ENV_OFF=	ABC_USE_NO_READLINE=1

THREADS_MAKE_ENV_OFF=	ABC_USE_NO_PTHREADS=1

do-install:
	${INSTALL_PROGRAM} ${BUILD_WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${BUILD_WRKSRC}/lib${PORTNAME}.so ${STAGEDIR}${PREFIX}/lib
	@${MKDIR} ${STAGEDIR}${PREFIX}/include/abc
.for i in aig base bdd bool generic.h  map misc opt phys proof sat
	@cd ${WRKSRC}/src && ${COPYTREE_SHARE} ${i} ${STAGEDIR}${PREFIX}/include/abc/
.endfor
	@${FIND} ${STAGEDIR}${PREFIX}/include/abc -name "*.c" | ${XARGS} ${RM}

.include <bsd.port.mk>
