# $FreeBSD: head/devel/hs-either/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	either
PORTVERSION=	5
PORTREVISION=	2
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Either monad transformer

LICENSE=	BSD3CLAUSE

USE_CABAL=	bifunctors exceptions free mmorph monad-control \
		MonadRandom mtl profunctors semigroupoids semigroups \
		transformers-base

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
