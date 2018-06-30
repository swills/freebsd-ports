# $FreeBSD: head/devel/hs-resource-pool/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	resource-pool
PORTVERSION=	0.2.3.2
PORTREVISION=	4
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	High-performance striped resource pooling implementation

LICENSE=	BSD3CLAUSE

USE_CABAL=	hashable monad-control>=0.2.0.1 transformers-base>=0.4 \
		vector>=0.7

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
