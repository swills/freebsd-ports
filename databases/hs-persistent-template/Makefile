# $FreeBSD: head/databases/hs-persistent-template/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	persistent-template
PORTVERSION=	2.5.2
CATEGORIES=	databases haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Type-safe, non-relational, multi-backend persistence

LICENSE=	MIT

USE_CABAL=	aeson aeson-compat http-api-data monad-control monad-logger \
		path-pieces persistent tagged text unordered-containers

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
