# $FreeBSD: head/devel/hs-mono-traversable-instances/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	mono-traversable-instances
PORTVERSION=	0.1.0.0
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	The mono-traversable-instances package

LICENSE=	BSD3CLAUSE

USE_CABAL=	comonad dlist dlist-instances mono-traversable semigroupoids \
		semigroups vector-instances

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
