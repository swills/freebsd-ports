# $FreeBSD: head/security/hs-Crypto/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	Crypto
PORTVERSION=	4.2.5.1
PORTREVISION=	14
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Collects together existing Haskell cryptographic functions

USE_CABAL=	HUnit QuickCheck>=2.4.0.1 random

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
