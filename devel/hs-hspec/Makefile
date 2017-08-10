# $FreeBSD: head/devel/hs-hspec/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	hspec
PORTVERSION=	2.4.4
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Testing Framework for Haskell

LICENSE=	MIT

USE_CABAL=	hspec-core>=2.1.10 hspec-discover>=2.1.10 \
		hspec-expectations>=0.7.1 HUnit>=1.2.5 QuickCheck>=2.5.1

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
