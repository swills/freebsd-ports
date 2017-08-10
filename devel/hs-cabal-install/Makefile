# $FreeBSD: head/devel/hs-cabal-install/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	cabal-install
PORTVERSION=	1.24.0.2
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Command-line interface for Cabal and Hackage

LICENSE=	BSD3CLAUSE

USE_CABAL=	async base16-bytestring cryptohash-sha256 hackage-security \
		hashable HTTP mtl network network-uri old-time random stm \
		tar zlib

STANDALONE=	yes
EXECUTABLE=	cabal

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
