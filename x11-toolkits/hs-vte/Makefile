# $FreeBSD: head/x11-toolkits/hs-vte/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	vte
PORTVERSION=	0.13.1.1
PORTREVISION=	3
CATEGORIES=	x11-toolkits haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to the VTE library

LICENSE=	LGPL21

USES=		pkgconfig
USE_CABAL=	glib>=0.13.0.0 gtk>=0.13.0.0 mtl pango>=0.13.0.0
USE_GNOME=	vte

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
