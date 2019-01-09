# $FreeBSD: head/security/hs-crypto-conduit/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	crypto-conduit
PORTVERSION=	0.5.5
PORTREVISION=	4
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Conduit interface for cryptographic operations (from crypto-api)

LICENSE=	BSD3CLAUSE

USE_CABAL=	cereal conduit conduit-extra crypto-api resourcet

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
