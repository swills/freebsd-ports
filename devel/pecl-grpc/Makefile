# Created by: vanilla@
# $FreeBSD: head/devel/pecl-grpc/Makefile 456397 2017-12-15 15:02:04Z vanilla $

PORTNAME=	grpc
PORTVERSION=	1.8.0
CATEGORIES=	devel net

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	High performance, general RPC framework

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

BROKEN_aarch64=		fails to compile: fatal error: sys/auxv.h file not found
BROKEN_mips=		fails to compile: fatal error: sys/auxv.h file not found
BROKEN_mips64=		fails to compile: fatal error: sys/auxv.h file not found
BROKEN_powerpc64=	fails to compile: cc1: error: unrecognized command line option "-Wno-parentheses-equality"

USES=		php:pecl

.include <bsd.port.mk>
