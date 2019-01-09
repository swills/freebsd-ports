# $FreeBSD: head/security/hs-nonce/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	nonce
PORTVERSION=	1.0.7
PORTREVISION=	2
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Generate cryptographic nonces

LICENSE=	BSD3CLAUSE

USE_CABAL=	base64-bytestring cprng-aes>=0.5 crypto-random entropy>=0.3.7 \
		unliftio

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
