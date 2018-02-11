# $FreeBSD: head/security/hs-crypto-conduit/Makefile 461362 2018-02-10 08:03:22Z tcberner $

PORTNAME=	crypto-conduit
PORTVERSION=	0.5.5
PORTREVISION=	2
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Conduit interface for cryptographic operations (from crypto-api)

LICENSE=	BSD3CLAUSE

USE_CABAL=	cereal conduit conduit-extra crypto-api resourcet

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
