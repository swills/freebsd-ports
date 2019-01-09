# $FreeBSD: head/security/hs-cryptonite/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	cryptonite
PORTVERSION=	0.24
PORTREVISION=	4
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Cryptography Primitives sink

LICENSE=	BSD3CLAUSE

USE_CABAL=	memory>=0.2

FLAGS_ENABLE=	support_aesni support_rdrand integer-gmp support_deepseq
FLAGS_DISABLE=	support_pclmuldq

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
