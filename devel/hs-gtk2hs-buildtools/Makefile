# $FreeBSD: head/devel/hs-gtk2hs-buildtools/Makefile 436914 2017-03-25 20:29:13Z tcberner $

PORTNAME=	gtk2hs-buildtools
PORTVERSION=	0.13.0.4
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Tools to build the Gtk2Hs suite of User Interface Libraries

LICENSE=	GPLv2

USE_CABAL=	hashtables random
USE_ALEX=	yes
USE_HAPPY=	yes

EXECUTABLE=	gtk2hsC2hs gtk2hsHookGenerator gtk2hsTypeGen

STANDALONE=	yes

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
