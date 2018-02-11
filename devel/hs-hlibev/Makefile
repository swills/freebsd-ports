# $FreeBSD: head/devel/hs-hlibev/Makefile 461362 2018-02-10 08:03:22Z tcberner $

PORTNAME=	hlibev
PORTVERSION=	0.4.0
PORTREVISION=	15
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	FFI interface to libev

LICENSE=	BSD3CLAUSE

USE_CABAL=	network

LIB_DEPENDS=	libev.so:devel/libev

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
