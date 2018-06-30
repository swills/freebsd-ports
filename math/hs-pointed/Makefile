# $FreeBSD: head/math/hs-pointed/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	pointed
PORTVERSION=	5
PORTREVISION=	3
CATEGORIES=	math haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Pointed and copointed data

LICENSE=	BSD3CLAUSE

USE_CABAL=	comonad data-default-class hashable kan-extensions \
		semigroupoids semigroups tagged unordered-containers

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
