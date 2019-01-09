# $FreeBSD: head/security/hs-crypto-pubkey/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	crypto-pubkey
PORTVERSION=	0.2.8
PORTREVISION=	5
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Public Key cryptography

LICENSE=	BSD3CLAUSE

USE_CABAL=	byteable crypto-numbers>=0.2.2 crypto-pubkey-types>=0.4.1 \
		crypto-random>=0.0.0 cryptohash>=0.9.1

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
