# $FreeBSD: head/security/hs-cprng-aes/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	cprng-aes
PORTVERSION=	0.6.1
PORTREVISION=	4
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Crypto Pseudo Random Number Generator using AES in counter mode

LICENSE=	BSD3CLAUSE

USE_CABAL=	byteable cipher-aes>=0.2.9 crypto-random>=0.0.7

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
