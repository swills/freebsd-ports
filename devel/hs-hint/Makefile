# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: head/devel/hs-hint/Makefile 470870 2018-05-25 21:44:12Z tcberner $

PORTNAME=	hint
PORTVERSION=	0.7.0
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Runtime Haskell interpreter (GHC API wrapper)

LICENSE=	BSD3CLAUSE

USE_CABAL=	exceptions extensible-exceptions ghc-mtl>=1.2.1 ghc-paths \
		mtl random utf8-string

IGNORE=		Doesn't build with recent GHC version

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
