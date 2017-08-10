# $FreeBSD: head/devel/hs-resourcet/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	resourcet
PORTVERSION=	1.1.9
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Deterministic allocation and freeing of scarce resources

LICENSE=	BSD3CLAUSE

USE_CABAL=	exceptions lifted-base mmorph monad-control mtl \
		transformers-base transformers-compat

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
