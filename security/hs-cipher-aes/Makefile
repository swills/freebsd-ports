# $FreeBSD: head/security/hs-cipher-aes/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	cipher-aes
PORTVERSION=	0.2.11
PORTREVISION=	1
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Fast AES cipher implementation with advanced mode of operations

LICENSE=	BSD3CLAUSE

USE_CABAL=	byteable crypto-cipher-types>=0.0.6 securemem>=0.1.2

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
