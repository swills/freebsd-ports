# $FreeBSD: head/math/fplll/Makefile 486919 2018-12-08 08:30:21Z yuri $

PORTNAME=	fplll
DISTVERSION=	5.2.1-229
DISTVERSIONSUFFIX=	-ga8cb572
CATEGORIES=	math

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Lattice algorithms using floating-point arithmetic

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libgmp.so:math/gmp \
		libmpfr.so:math/mpfr

USES=		autoreconf gmake libtool localbase:ldflags
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-static
USE_GITHUB=	yes
USE_LDCONFIG=	yes

.include <bsd.port.mk>
