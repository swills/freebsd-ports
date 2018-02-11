# $FreeBSD: head/databases/hs-persistent-template/Makefile 461362 2018-02-10 08:03:22Z tcberner $

PORTNAME=	persistent-template
PORTVERSION=	2.5.2
PORTREVISION=	1
CATEGORIES=	databases haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Type-safe, non-relational, multi-backend persistence

LICENSE=	MIT

USE_CABAL=	aeson aeson-compat http-api-data monad-control monad-logger \
		path-pieces persistent tagged text unordered-containers

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
