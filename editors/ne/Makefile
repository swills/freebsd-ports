# Created by: Andrej Zverev <az@inec.ru>
# $FreeBSD$

PORTNAME=	ne
PORTVERSION=	3.1.2
CATEGORIES=	editors
MASTER_SITES=	http://ne.di.unimi.it/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Nice and powerful editor

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gmake makeinfo perl5
USE_PERL5=	build
USE_CSTD=	c99

MAKEFILE=	makefile
MAKE_ARGS=	CC="${CC}" \
		OPTS="${CFLAGS}" \
		LDFLAGS="${LDFLAGS}" \
		NE_GLOBAL_DIR="${DATADIR}"
ALL_TARGET=	ne

LDFLAGS+=	-lgnuregex

BUILD_WRKSRC=	${WRKSRC}/src
INFO=		ne
PORTDOCS=	CHANGES NEWS README.md doc/default.* \
		doc/ne.pdf /doc/ne.txt doc/html/*

OPTIONS_DEFINE=		DEBUG DOCS

DEBUG_MAKE_ARGS=	NE_DEBUG=1

post-patch:
	@${FIND} ${BUILD_WRKSRC} -name "*.c" | ${XARGS} ${REINPLACE_CMD} -e \
		's|"regex\.h"|<gnu/regex.h>|g'
	@${REINPLACE_CMD} -e \
		's|-O3|| ; \
		/[[:space:]]regex.o/d ; \
		 s|regex.h$$||g ; /cp -pR/d' ${BUILD_WRKSRC}/makefile

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/ne

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
