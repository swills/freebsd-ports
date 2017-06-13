# Created by: Pietro Cerutti <gahr@gahr.ch>
# $FreeBSD: head/textproc/scew/Makefile 433395 2017-02-05 11:14:37Z sunpoet $

PORTNAME=	scew
PORTVERSION=	1.1.7
PORTREVISION=	3
CATEGORIES=	textproc
MASTER_SITES=	SAVANNAH/${PORTNAME}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple C Expat Wrapper

LICENSE=	LGPL21

LIB_DEPENDS=	libexpat.so:textproc/expat2

USES=		gmake libtool pathfix pkgconfig
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

SCEW_EXAMPLES=	print stream write

post-install:
.for ex in ${SCEW_EXAMPLES}
	${INSTALL_SCRIPT} \
		${WRKSRC}/examples/${PORTNAME}_${ex}/${PORTNAME}_${ex} \
		${STAGEDIR}${PREFIX}/bin
.endfor

.ifdef MAINTAINER_MODE
LIB_DEPENDS+=	libcheck.so:devel/check
regression-test: build
	${MAKE_CMD} -C ${WRKSRC}/tests check
.endif

.include <bsd.port.mk>
