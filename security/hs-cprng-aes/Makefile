# $FreeBSD: head/security/hs-cprng-aes/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	cprng-aes
PORTVERSION=	0.6.1
PORTREVISION=	5
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Crypto Pseudo Random Number Generator using AES in counter mode

LICENSE=	BSD3CLAUSE

USE_CABAL=	byteable cipher-aes>=0.2.9 crypto-random>=0.0.7

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
