# Created by: mainland@apeiron.net
# $FreeBSD: head/textproc/hs-lhs2tex/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	lhs2tex
PORTVERSION=	1.20
PORTREVISION=	1
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Preprocessor for typesetting Haskell sources with LaTeX

LICENSE=	GPLv2

USE_CABAL=	mtl regex-compat
USE_TEX=	latex dvipsk

STANDALONE=	yes
EXECUTABLE=	lhs2TeX

MAN1PAGES=	lhs2TeX.1

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
