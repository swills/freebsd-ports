# $FreeBSD: head/security/hs-crypto-pubkey/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	crypto-pubkey
PORTVERSION=	0.2.8
PORTREVISION=	1
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Public Key cryptography

LICENSE=	BSD3CLAUSE

USE_CABAL=	byteable crypto-numbers>=0.2.2 crypto-pubkey-types>=0.4.1 \
		crypto-random>=0.0.0 cryptohash>=0.9.1

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
