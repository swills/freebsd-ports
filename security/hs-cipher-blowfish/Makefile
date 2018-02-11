# $FreeBSD: head/security/hs-cipher-blowfish/Makefile 461362 2018-02-10 08:03:22Z tcberner $

PORTNAME=	cipher-blowfish
PORTVERSION=	0.0.3
PORTREVISION=	4
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Blowfish cipher

LICENSE=	BSD3CLAUSE

USE_CABAL=	byteable crypto-cipher-types>=0.0.3 securemem>=0.1.2 \
		vector

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
