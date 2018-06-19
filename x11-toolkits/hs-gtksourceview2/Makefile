# $FreeBSD: head/x11-toolkits/hs-gtksourceview2/Makefile 470870 2018-05-25 21:44:12Z tcberner $

PORTNAME=	gtksourceview2
PORTVERSION=	0.13.3.1
PORTREVISION=	2
CATEGORIES=	x11-toolkits haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to the GtkSourceView library

LICENSE=	LGPL21

USES=		pkgconfig
USE_CABAL=	glib>=0.13 gtk>=0.13.0.0 mtl
USE_GNOME=	gtksourceview2

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
