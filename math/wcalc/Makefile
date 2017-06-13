# Created by: Amarendra Godbole <amarendra.godbole@gmail.com>
# $FreeBSD: head/math/wcalc/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	wcalc
PORTVERSION=	2.5
CATEGORIES=	math
MASTER_SITES=	SF/w-calc/Wcalc/${PORTVERSION}

MAINTAINER=	amarendra.godbole@gmail.com
COMMENT=	Natural-expression command-line calculator

LICENSE=	GPLv2

LIB_DEPENDS=	libgmp.so:math/gmp \
		libmpfr.so:math/mpfr

USES=		localbase readline

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/wcalc \
		man/man1/wcalc.1.gz

.include <bsd.port.mk>
