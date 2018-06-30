# $FreeBSD: head/devel/hs-lifted-async/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	lifted-async
PORTVERSION=	0.10.0.1
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Run lifted IO operations asynchronously and wait for their results

LICENSE=	BSD3CLAUSE

USE_CABAL=	async>=2.0.1 constraints>=0.2 lifted-base>=0.2 \
		monad-control>=0.3.1 transformers-base>=0.4

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
