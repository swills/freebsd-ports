# Created by: Amarendra Godbole <amarendra.godbole@gmail.com>
# $FreeBSD: head/math/wcalc/Makefile 444463 2017-06-27 13:46:53Z sunpoet $

PORTNAME=	wcalc
PORTVERSION=	2.5
PORTREVISION=	1
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
