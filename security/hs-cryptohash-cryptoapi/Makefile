# $FreeBSD: head/security/hs-cryptohash-cryptoapi/Makefile 461362 2018-02-10 08:03:22Z tcberner $

PORTNAME=	cryptohash-cryptoapi
PORTVERSION=	0.1.4
PORTREVISION=	1
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Crypto-api interfaces for cryptohash

LICENSE=	BSD3CLAUSE

USE_CABAL=	cereal>=0.2 crypto-api>=0.11 cryptohash>=0.8.0 tagged>=0.1

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
