# $FreeBSD: head/security/hs-cipher-aes128/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	cipher-aes128
PORTVERSION=	0.7.0.3
PORTREVISION=	3
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	AES and common modes using AES-NI when available

LICENSE=	BSD3CLAUSE

USE_CABAL=	cereal crypto-api>=0.13 tagged

FLAGS_DISABLE=	test halvm

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
