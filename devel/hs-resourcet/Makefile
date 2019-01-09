# $FreeBSD: head/devel/hs-resourcet/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	resourcet
PORTVERSION=	1.2.1
PORTREVISION=	2
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Deterministic allocation and freeing of scarce resources

LICENSE=	BSD3CLAUSE

USE_CABAL=	exceptions lifted-base mmorph monad-control mtl \
		primitive transformers-base transformers-compat \
		unliftio-core

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
