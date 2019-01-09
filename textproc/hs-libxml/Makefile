# $FreeBSD: head/textproc/hs-libxml/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	libxml
PORTVERSION=	0.1.1
PORTREVISION=	21
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to libxml2

LICENSE=	BSD3CLAUSE

USE_CABAL=	mtl
USE_GNOME=	libxml2

CONFIGURE_ARGS+=	--extra-include-dirs="${LOCALBASE}/include/libxml2"

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
