# $FreeBSD: head/devel/hs-gconf/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	gconf
PORTVERSION=	0.13.1.0
PORTREVISION=	4
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to the GNOME configuration database system

LICENSE=	LGPL21

USES=		pkgconfig
USE_CABAL=	glib>=0.13.0.0 gtk2hs-buildtools
USE_GNOME=	gconf2

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
