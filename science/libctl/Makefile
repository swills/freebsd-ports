# Created by: ijliao
# $FreeBSD$

PORTNAME=	libctl
DISTVERSIONPREFIX=	v
DISTVERSION=	4.5.0
CATEGORIES=	science math

MAINTAINER=	devel@stasyan.com
COMMENT=	Control Language Library

LICENSE=	GPLv2

BROKEN_sparc64=	does not build

LIB_DEPENDS=	libgc-threaded.so:devel/boehm-gc-threaded \
		libguile-2.2.so:lang/guile2

USES=		autoreconf fortran libtool pkgconfig
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-shared
USE_LDCONFIG=	yes
LDFLAGS+=	-L${LOCALBASE}/lib -lm

USE_GITHUB=	yes
GH_ACCOUNT=	NanoComp

OPTIONS_DEFINE=	NLOPT DOCS EXAMPLES
OPTIONS_DEFAULT=	NLOPT
NLOPT_DESC=	Use NLopt, an external NonLinear OPTimizer

NLOPT_LIB_DEPENDS=	libnlopt.so:math/nlopt

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${CP} -R ${WRKSRC}/doc/ ${STAGEDIR}${DOCSDIR}
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${CP} -R ${WRKSRC}/examples/ ${STAGEDIR}${EXAMPLESDIR}
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libctl.so.7.3.0
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libctlgeom.so.7.3.0
	@${STRIP_CMD} ${STAGEDIR}${EXAMPLESDIR}/.libs/example

.include <bsd.port.mk>
