# $FreeBSD: head/devel/hs-resource-pool/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	resource-pool
PORTVERSION=	0.2.3.2
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	High-performance striped resource pooling implementation

LICENSE=	BSD3CLAUSE

USE_CABAL=	hashable monad-control>=0.2.0.1 stm>=2.3 \
		transformers-base>=0.4 vector>=0.7

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
