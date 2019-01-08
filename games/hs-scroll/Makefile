# Created by: Nikolai Lifanov <lifanov@mail.lifanov.com>
# $FreeBSD: head/games/hs-scroll/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	scroll
PORTVERSION=	1.20180421
PORTREVISION=	2
CATEGORIES=	games haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	A roguelike game

LICENSE=	GPLv2

PKGNAMEPREFIX=

USE_CABAL=	IfElse case-insensitive data-default monad-loops mtl \
		optparse-applicative ncurses random vector

STANDALONE=	yes
EXECUTABLE=	scroll

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
