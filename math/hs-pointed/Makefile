# $FreeBSD: head/math/hs-pointed/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	pointed
PORTVERSION=	5.0.1
PORTREVISION=	1
CATEGORIES=	math haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Pointed and copointed data

LICENSE=	BSD3CLAUSE

USE_CABAL=	comonad data-default-class hashable kan-extensions \
		semigroupoids semigroups tagged unordered-containers

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
