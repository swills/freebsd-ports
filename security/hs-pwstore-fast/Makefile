# $FreeBSD: head/security/hs-pwstore-fast/Makefile 461362 2018-02-10 08:03:22Z tcberner $

PORTNAME=	pwstore-fast
PORTVERSION=	2.4.4
PORTREVISION=	2
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Secure password storage

LICENSE=	BSD3CLAUSE

USE_CABAL=	base64-bytestring>=0.1 byteable>=0.1 cryptohash>=0.6 random>=1

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
