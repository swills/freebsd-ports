# $FreeBSD: head/devel/hs-hlibev/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	hlibev
PORTVERSION=	0.4.0
PORTREVISION=	18
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	FFI interface to libev

LICENSE=	BSD3CLAUSE

USE_CABAL=	network

LIB_DEPENDS=	libev.so:devel/libev

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
