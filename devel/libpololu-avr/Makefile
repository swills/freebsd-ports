# $FreeBSD: head/devel/libpololu-avr/Makefile 440746 2017-05-13 03:35:51Z linimon $

PORTNAME=	libpololu-avr
PORTVERSION=	151002
CATEGORIES=	devel

MAINTAINER=	jonathan@FreeBSD.org
COMMENT=	Support libraries for Pololu robots

LICENSE=	MIT

BUILD_DEPENDS=	${LOCALBASE}/avr/lib/libc.a:devel/avr-libc
RUN_DEPENDS=	${LOCALBASE}/avr/lib/libc.a:devel/avr-libc

BROKEN_powerpc64=	fails to build: OrangutanAnalog.h: internal compiler error: Segmentation fault

USES=		gmake
USE_GITHUB=	yes
GH_ACCOUNT=	pololu

MAKE_ENV=	LIB=${STAGEDIR}${PREFIX}/avr/lib
ALL_TARGET=	library_files

.include <bsd.port.mk>
