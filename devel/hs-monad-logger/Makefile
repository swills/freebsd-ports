# $FreeBSD: head/devel/hs-monad-logger/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	monad-logger
PORTVERSION=	0.3.28.5
PORTREVISION=	2
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Class of monads which can log messages

LICENSE=	MIT

USE_CABAL=	blaze-builder conduit>=1.0 conduit-extra>=1.0 exceptions \
		fast-logger>=2.0 lifted-base monad-control monad-loops \
		mtl resourcet>=0.4 stm-chans transformers-base

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
