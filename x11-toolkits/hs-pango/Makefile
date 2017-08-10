# $FreeBSD: head/x11-toolkits/hs-pango/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	pango
PORTVERSION=	0.13.3.1
CATEGORIES=	x11-toolkits haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to the Pango text rendering engine

LICENSE=	LGPL21

USES=		pkgconfig
USE_CABAL=	cairo>=0.13.0.0 glib>=0.13.0.0 mtl text>=0.11.0.6
USE_GNOME=	pango

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
