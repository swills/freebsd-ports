# $FreeBSD$

PORTNAME=	libnormaliz
DISTVERSION=	3.8.9
CATEGORIES=	math
MASTER_SITES=	https://github.com/Normaliz/Normaliz/releases/download/v${PORTVERSION}/
DISTNAME=	normaliz-${PORTVERSION}

MAINTAINER=	moritz@schmi.tt
COMMENT=	Compute Hilbert bases and enumerative data of rational polyhedra

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${LOCALBASE}/include/gmpxx.h:math/gmp

USES=		autoreconf compiler:c++11-lang gmake libtool

MAKEFILE=	Makefile.classic
GNU_CONFIGURE=	yes

BUILD_WRKSRC=	${WRKSRC}/source/libnormaliz
INSTALL_WRKSRC=	${WRKSRC}/source/libnormaliz

OPTIONS_DEFINE=		COCOA DOCS FLINT OPENMP
COCOA_DESC=		Link with libcocoa.a (might cause circular dependency)
COCOA_BUILD_DEPENDS=	${LOCALBASE}/lib/libcocoa.a:math/cocoalib
COCOA_CONFIGURE_WITH=	cocoalib
FLINT_DESC=		Link with libflint.so
FLINT_LIB_DEPENDS=	libflint.so:math/flint2
FLINT_CONFIGURE_WITH=	flint
FLINT_LDFLAGS=		-lpthread
OPENMP_CONFIGURE_ENABLE=	openmp

CXXFLAGS+=	-I ${LOCALBASE}/include -I ${WRKSRC}/source
LDFLAGS+=	-L${LOCALBASE}/lib

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/include/libnormaliz
	${INSTALL_DATA}	${INSTALL_WRKSRC}/libnormaliz.a ${STAGEDIR}${PREFIX}/lib
	cd ${INSTALL_WRKSRC} && ${INSTALL_DATA} \
		cone.h \
		cone_property.h \
		general.h \
		HilbertSeries.h \
		integer.h \
		libnormaliz.h \
		matrix.h \
		my_omp.h \
		normaliz_exception.h \
		sublattice_representation.h \
		vector_operations.h \
		version.h \
		nmz_integrate.h \
		${STAGEDIR}${PREFIX}/include/libnormaliz

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_MAN} ${WRKSRC}/doc/Normaliz.pdf ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
