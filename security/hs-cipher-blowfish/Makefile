# $FreeBSD: head/security/hs-cipher-blowfish/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	cipher-blowfish
PORTVERSION=	0.0.3
PORTREVISION=	7
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Blowfish cipher

LICENSE=	BSD3CLAUSE

USE_CABAL=	byteable crypto-cipher-types>=0.0.3 securemem>=0.1.2 \
		vector

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
