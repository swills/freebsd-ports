# $FreeBSD: head/devel/hs-either/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	either
PORTVERSION=	4.4.1.1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Either monad transformer

LICENSE=	BSD3CLAUSE

USE_CABAL=	bifunctors exceptions free mmorph monad-control \
		MonadRandom mtl profunctors semigroupoids semigroups \
		transformers-base

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
