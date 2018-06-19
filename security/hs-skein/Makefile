# $FreeBSD: head/security/hs-skein/Makefile 470870 2018-05-25 21:44:12Z tcberner $

PORTNAME=	skein
PORTVERSION=	1.0.9.4
PORTREVISION=	2
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Skein, a family of cryptographic hash functions

LICENSE=	BSD3CLAUSE

USE_CABAL=	cereal>=0.3 crypto-api>=0.6 tagged>=0.2

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
