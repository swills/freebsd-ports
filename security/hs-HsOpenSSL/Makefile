# $FreeBSD: head/security/hs-HsOpenSSL/Makefile 436247 2017-03-15 14:45:30Z mat $

PORTNAME=	HsOpenSSL
PORTVERSION=	0.11.1.1
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Partial OpenSSL binding for Haskell

USE_CABAL=	network>=2.1 old-locale>=1.0

USES=	ssl

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
