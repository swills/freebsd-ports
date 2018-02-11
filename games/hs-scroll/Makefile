# Created by: Nikolai Lifanov <lifanov@mail.lifanov.com>
# $FreeBSD: head/games/hs-scroll/Makefile 461362 2018-02-10 08:03:22Z tcberner $

PORTNAME=	scroll
PORTVERSION=	1.20170122
PORTREVISION=	1
CATEGORIES=	games haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	A roguelike game

LICENSE=	GPLv2

PKGNAMEPREFIX=

USE_CABAL=	IfElse case-insensitive data-default monad-loops mtl \
		optparse-applicative ncurses random text vector

STANDALONE=	yes
EXECUTABLE=	scroll

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
