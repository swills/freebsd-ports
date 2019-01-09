# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: head/devel/hs-hint/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	hint
PORTVERSION=	0.9.0
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Runtime Haskell interpreter (GHC API wrapper)

LICENSE=	BSD3CLAUSE

USE_CABAL=	exceptions extensible-exceptions ghc-mtl>=1.2.1 ghc-paths \
		mtl random temporary utf8-string

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
