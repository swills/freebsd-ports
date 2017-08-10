# $FreeBSD: head/devel/hs-gconf/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	gconf
PORTVERSION=	0.13.1.0
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to the GNOME configuration database system

LICENSE=	LGPL21

USES=		pkgconfig
USE_CABAL=	glib>=0.13.0.0 gtk2hs-buildtools text>=0.11.0.6
USE_GNOME=	gconf2

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
