# $FreeBSD: head/devel/libpololu-avr/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	libpololu-avr
PORTVERSION=	151002
PORTREVISION=	1
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
