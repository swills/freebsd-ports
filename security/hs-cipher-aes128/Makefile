# $FreeBSD: head/security/hs-cipher-aes128/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	cipher-aes128
PORTVERSION=	0.7.0.4
PORTREVISION=	1
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	AES and common modes using AES-NI when available

LICENSE=	BSD3CLAUSE

USE_CABAL=	cereal crypto-api>=0.13 tagged

FLAGS_DISABLE=	test halvm

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
