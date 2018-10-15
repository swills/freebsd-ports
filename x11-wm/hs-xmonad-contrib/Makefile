# Created by: Matthieu Guegan <matt.guegan@free.fr>
# $FreeBSD: head/x11-wm/hs-xmonad-contrib/Makefile 481361 2018-10-06 10:09:13Z arrowd $

PORTNAME=	xmonad-contrib
PORTVERSION=	0.15
CATEGORIES=	x11-wm haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Third-party extensions for xmonad

LICENSE=	BSD3CLAUSE

USE_CABAL=	extensible-exceptions mtl>=1 old-time random utf8-string \
		X11>=1.6.1 X11-xft>=0.2 xmonad
USE_XORG=	x11

RUN_DEPENDS+=	bash:shells/bash

FLAGS_DISABLE=	testing

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
