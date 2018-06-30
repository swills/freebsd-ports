# $FreeBSD: head/devel/hs-mono-traversable-instances/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	mono-traversable-instances
PORTVERSION=	0.1.0.0
PORTREVISION=	3
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	The mono-traversable-instances package

LICENSE=	BSD3CLAUSE

USE_CABAL=	comonad dlist dlist-instances mono-traversable semigroupoids \
		semigroups vector-instances

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
