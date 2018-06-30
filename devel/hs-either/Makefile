# $FreeBSD: head/devel/hs-either/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	either
PORTVERSION=	5
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Either monad transformer

LICENSE=	BSD3CLAUSE

USE_CABAL=	bifunctors exceptions free mmorph monad-control \
		MonadRandom mtl profunctors semigroupoids semigroups \
		transformers-base

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
