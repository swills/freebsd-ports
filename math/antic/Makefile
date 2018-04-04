# $FreeBSD: head/math/antic/Makefile 466386 2018-04-03 23:14:57Z yuri $

PORTNAME=	antic
DISTVERSION=	g20180325
CATEGORIES=	math

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Algebraic Number Theory In C

LICENSE=	GPLv2

LIB_DEPENDS=	libflint.so:math/flint2 \
		libgmp.so:math/gmp \
		libmpfr.so:math/mpfr

USES=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-static
USE_GITHUB=	yes
GH_ACCOUNT=	wbhart
GH_TAGNAME=	0063a41
USE_LDCONFIG=	yes

PLIST_FILES=	include/antic/nf.h \
		include/antic/nf_elem.h \
		include/antic/qfb.h \
		lib/libantic.so \
		lib/libantic.so.0 \
		lib/libantic.so.0.0.1

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libantic.so

.include <bsd.port.mk>
