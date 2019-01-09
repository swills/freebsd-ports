# $FreeBSD: head/security/hs-pureMD5/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	pureMD5
PORTVERSION=	2.1.3
PORTREVISION=	4
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Haskell-only implementation of MD5 digest (hash) yalgorithm

LICENSE=	BSD3CLAUSE

USE_CABAL=	cereal>=0.2 crypto-api tagged

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
