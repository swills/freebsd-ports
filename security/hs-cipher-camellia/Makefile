# $FreeBSD: head/security/hs-cipher-camellia/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	cipher-camellia
PORTVERSION=	0.0.2
PORTREVISION=	6
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Camellia block cipher primitives

LICENSE=	BSD3CLAUSE

USE_CABAL=	byteable crypto-cipher-types>=0.0.3 securemem>=0.1.2 \
		vector

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
