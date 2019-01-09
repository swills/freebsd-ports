# $FreeBSD: head/textproc/hs-pretty-show/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	pretty-show
PORTVERSION=	1.7
PORTREVISION=	2
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Library and an executable for working with derived Show instances

LICENSE=	BSD3CLAUSE

EXECUTABLE=	ppsh
USE_CABAL=	happy haskell-lexer

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
