# $FreeBSD: head/converters/hs-aeson-pretty/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	aeson-pretty
PORTVERSION=	0.8.7
PORTREVISION=	2
CATEGORIES=	converters haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	JSON pretty-printing library and command-line tool

LICENSE=	BSD3CLAUSE

USE_CABAL=	aeson attoparsec base-compat cmdargs scientific \
		unordered-containers vector

FLAGS_DISABLE=	lib-only
EXECUTABLE=	aeson-pretty

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
