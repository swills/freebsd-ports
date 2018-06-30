# $FreeBSD: head/security/hs-monadcryptorandom/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	monadcryptorandom
PORTVERSION=	0.7.2.1
PORTREVISION=	1
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Monad for using CryptoRandomGen

LICENSE=	BSD3CLAUSE

USE_CABAL=	crypto-api exceptions tagged transformers-compat

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
