# $FreeBSD: head/textproc/hs-pretty-show/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	pretty-show
PORTVERSION=	1.7
PORTREVISION=	1
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Library and an executable for working with derived Show instances

LICENSE=	BSD3CLAUSE

EXECUTABLE=	ppsh
USE_CABAL=	happy haskell-lexer

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
