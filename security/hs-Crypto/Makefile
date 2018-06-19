# $FreeBSD: head/security/hs-Crypto/Makefile 470870 2018-05-25 21:44:12Z tcberner $

PORTNAME=	Crypto
PORTVERSION=	4.2.5.1
PORTREVISION=	12
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Collects together existing Haskell cryptographic functions

USE_CABAL=	HUnit QuickCheck>=2.4.0.1 random

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
