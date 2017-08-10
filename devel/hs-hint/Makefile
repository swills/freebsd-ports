# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: head/devel/hs-hint/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	hint
PORTVERSION=	0.7.0
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Runtime Haskell interpreter (GHC API wrapper)

LICENSE=	BSD3CLAUSE

USE_CABAL=	exceptions extensible-exceptions ghc-mtl>=1.2.1 ghc-paths \
		mtl random utf8-string

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
