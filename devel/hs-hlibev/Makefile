# $FreeBSD: head/devel/hs-hlibev/Makefile 470870 2018-05-25 21:44:12Z tcberner $

PORTNAME=	hlibev
PORTVERSION=	0.4.0
PORTREVISION=	16
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	FFI interface to libev

LICENSE=	BSD3CLAUSE

USE_CABAL=	network

LIB_DEPENDS=	libev.so:devel/libev

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
