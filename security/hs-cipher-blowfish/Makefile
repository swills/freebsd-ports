# $FreeBSD: head/security/hs-cipher-blowfish/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	cipher-blowfish
PORTVERSION=	0.0.3
PORTREVISION=	3
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Blowfish cipher

LICENSE=	BSD3CLAUSE

USE_CABAL=	byteable crypto-cipher-types>=0.0.3 securemem>=0.1.2 \
		vector

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
