# $FreeBSD: head/security/hs-Crypto/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	Crypto
PORTVERSION=	4.2.5.1
PORTREVISION=	13
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Collects together existing Haskell cryptographic functions

USE_CABAL=	HUnit QuickCheck>=2.4.0.1 random

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
