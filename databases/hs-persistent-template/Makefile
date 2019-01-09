# $FreeBSD: head/databases/hs-persistent-template/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	persistent-template
PORTVERSION=	2.5.4
PORTREVISION=	3
CATEGORIES=	databases haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Type-safe, non-relational, multi-backend persistence

LICENSE=	MIT

USE_CABAL=	aeson aeson-compat http-api-data monad-control monad-logger \
		path-pieces persistent tagged unordered-containers

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
