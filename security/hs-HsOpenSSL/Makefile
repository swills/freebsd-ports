# $FreeBSD: head/security/hs-HsOpenSSL/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	HsOpenSSL
PORTVERSION=	0.11.4.13
PORTREVISION=	2
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Partial OpenSSL binding for Haskell

USE_CABAL=	network>=2.1 old-locale>=1.0

USES=	ssl

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
