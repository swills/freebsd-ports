# $FreeBSD$

PORTNAME=	yami4
PORTVERSION=	1.10.2
CATEGORIES=	net
MASTER_SITES=	http://www.inspirel.com/yami4/files/
DISTNAME=	yami4-gpl-${PORTVERSION}

MAINTAINER=	prog@msobczak.com
COMMENT=	Messaging library for distributed systems

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/gpl-3.0.txt

USES=		zip

MAKE_ARGS=	OPTIONS="${CXXFLAGS}"
CXXFLAGS+=	-D_GLIBCXX_USE_C99 # XXX ports/193528

PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

do-build :
	${DO_MAKE_BUILD} -C ${WRKSRC}/src/core
	${DO_MAKE_BUILD} -C ${WRKSRC}/src/cpp

do-install :
	(cd ${WRKSRC}/include && ${COPYTREE_SHARE} yami4-core ${STAGEDIR}${PREFIX}/include)
	(cd ${WRKSRC}/include && ${COPYTREE_SHARE} yami4-cpp ${STAGEDIR}${PREFIX}/include)
	(cd ${WRKSRC}/lib && ${INSTALL_DATA} *.a ${STAGEDIR}${PREFIX}/lib)

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}/cpp ${STAGEDIR}${DOCSDIR}/core
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/doc/cpp/|} ${STAGEDIR}${DOCSDIR}/cpp
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/doc/core/|} ${STAGEDIR}${DOCSDIR}/core
.include <bsd.port.mk>
