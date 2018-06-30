# $FreeBSD: head/x11-toolkits/hs-wxcore/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	wxcore
PORTVERSION=	0.92.3.0
PORTREVISION=	4
CATEGORIES=	x11-toolkits haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	wxHaskell core

USE_CABAL=	wxc>=0.91 wxdirect>=0.91

USES=	dos2unix pkgconfig
DOS2UNIX_GLOB=	*.hs

USE_WX=		3.0
WX_COMPS=	wx

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
