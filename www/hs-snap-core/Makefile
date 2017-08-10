# $FreeBSD: head/www/hs-snap-core/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	snap-core
PORTVERSION=	1.0.2.1
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Snap: A Haskell Web Framework (core interfaces and types)

LICENSE=	BSD3CLAUSE

USE_CABAL=	attoparsec case-insensitive hashable HUnit io-streams \
		lifted-base monad-control mtl network-uri old-locale \
		random readable regex-posix text time-locale-compat \
		transformers-base unix-compat unordered-containers \
		vector

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
