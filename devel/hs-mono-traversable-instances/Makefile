# $FreeBSD: head/devel/hs-mono-traversable-instances/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	mono-traversable-instances
PORTVERSION=	0.1.0.0
PORTREVISION=	4
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	The mono-traversable-instances package

LICENSE=	BSD3CLAUSE

USE_CABAL=	comonad dlist dlist-instances mono-traversable semigroupoids \
		semigroups vector-instances

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
