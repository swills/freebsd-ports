# Created by: mainland@apeiron.net
# $FreeBSD: head/textproc/hs-lhs2tex/Makefile 470870 2018-05-25 21:44:12Z tcberner $

PORTNAME=	lhs2tex
PORTVERSION=	1.20
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
