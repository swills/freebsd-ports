# $FreeBSD: head/devel/hs-hlibev/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	hlibev
PORTVERSION=	0.4.0
PORTREVISION=	14
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	FFI interface to libev

LICENSE=	BSD3CLAUSE

USE_CABAL=	network

LIB_DEPENDS=	libev.so:devel/libev

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
