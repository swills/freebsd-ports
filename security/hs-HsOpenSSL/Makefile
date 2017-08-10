# $FreeBSD: head/security/hs-HsOpenSSL/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	HsOpenSSL
PORTVERSION=	0.11.4.9
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Partial OpenSSL binding for Haskell

USE_CABAL=	network>=2.1 old-locale>=1.0

USES=	ssl

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
