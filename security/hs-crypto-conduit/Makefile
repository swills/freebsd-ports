# $FreeBSD: head/security/hs-crypto-conduit/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	crypto-conduit
PORTVERSION=	0.5.5
PORTREVISION=	3
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Conduit interface for cryptographic operations (from crypto-api)

LICENSE=	BSD3CLAUSE

USE_CABAL=	cereal conduit conduit-extra crypto-api resourcet

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
