# $FreeBSD: head/security/hs-HsOpenSSL/Makefile 470870 2018-05-25 21:44:12Z tcberner $

PORTNAME=	HsOpenSSL
PORTVERSION=	0.11.4.13
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Partial OpenSSL binding for Haskell

USE_CABAL=	network>=2.1 old-locale>=1.0

USES=	ssl

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
