# $FreeBSD: head/devel/hs-either/Makefile 470870 2018-05-25 21:44:12Z tcberner $

PORTNAME=	either
PORTVERSION=	5
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Either monad transformer

LICENSE=	BSD3CLAUSE

USE_CABAL=	bifunctors exceptions free mmorph monad-control \
		MonadRandom mtl profunctors semigroupoids semigroups \
		transformers-base

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
