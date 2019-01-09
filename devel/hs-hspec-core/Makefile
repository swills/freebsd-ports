# $FreeBSD: head/devel/hs-hspec-core/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	hspec-core
PORTVERSION=	2.5.0
PORTREVISION=	2
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Testing Framework for Haskell

LICENSE=	MIT

USE_CABAL=	ansi-terminal>=0.5 async>=2 clock hspec-expectations>=0.7.1 \
		HUnit>=1.2.5 QuickCheck>=2.5.1 quickcheck-io random setenv \
		tf-random

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
