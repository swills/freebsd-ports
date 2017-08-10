# $FreeBSD: head/security/hs-crypto-conduit/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	crypto-conduit
PORTVERSION=	0.5.5
PORTREVISION=	1
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Conduit interface for cryptographic operations (from crypto-api)

LICENSE=	BSD3CLAUSE

USE_CABAL=	cereal conduit conduit-extra crypto-api resourcet

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
