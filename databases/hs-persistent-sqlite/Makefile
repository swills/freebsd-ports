# $FreeBSD: head/databases/hs-persistent-sqlite/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	persistent-sqlite
PORTVERSION=	2.9.1
PORTREVISION=	1
CATEGORIES=	databases haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Backend for the persistent library using sqlite3

LICENSE=	MIT

USE_CABAL=	aeson conduit microlens-th monad-control monad-logger \
		old-locale persistent resource-pool resourcet \
		unordered-containers

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
