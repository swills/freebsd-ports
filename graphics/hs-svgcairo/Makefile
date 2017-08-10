# $FreeBSD: head/graphics/hs-svgcairo/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	svgcairo
PORTVERSION=	0.13.1.1
CATEGORIES=	graphics haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to the libsvg-cairo library

LICENSE=	BSD3CLAUSE

USES=		pkgconfig
USE_CABAL=	cairo glib mtl text
USE_GNOME=	librsvg2

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
