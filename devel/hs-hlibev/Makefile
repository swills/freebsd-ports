# $FreeBSD: head/devel/hs-hlibev/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	hlibev
PORTVERSION=	0.4.0
PORTREVISION=	17
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	FFI interface to libev

LICENSE=	BSD3CLAUSE

USE_CABAL=	network

LIB_DEPENDS=	libev.so:devel/libev

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
