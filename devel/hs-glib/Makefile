# $FreeBSD: head/devel/hs-glib/Makefile 470870 2018-05-25 21:44:12Z tcberner $

PORTNAME=	glib
PORTVERSION=	0.13.6.0
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to the GLIB library for Gtk2Hs

LICENSE=	LGPL21

USES=		pkgconfig
USE_CABAL=	gtk2hs-buildtools utf8-string>=0.2
USE_GNOME=	glib20

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
