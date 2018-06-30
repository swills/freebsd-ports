# $FreeBSD: head/devel/hs-hspec-core/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	hspec-core
PORTVERSION=	2.5.0
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Testing Framework for Haskell

LICENSE=	MIT

USE_CABAL=	ansi-terminal>=0.5 async>=2 clock hspec-expectations>=0.7.1 \
		HUnit>=1.2.5 QuickCheck>=2.5.1 quickcheck-io random setenv \
		tf-random

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
