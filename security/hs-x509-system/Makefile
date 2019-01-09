# $FreeBSD: head/security/hs-x509-system/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	x509-system
PORTVERSION=	1.6.6
PORTREVISION=	2
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Handle per-operating-system X.509 accessors and storage

LICENSE=	BSD3CLAUSE

USE_CABAL=	mtl pem>=0.1 x509>=1.6 x509-store>=1.6

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
