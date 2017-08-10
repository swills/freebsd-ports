# $FreeBSD: head/textproc/hs-libxml/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	libxml
PORTVERSION=	0.1.1
PORTREVISION=	17
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to libxml2

LICENSE=	BSD3CLAUSE

USE_CABAL=	mtl
USE_GNOME=	libxml2

CONFIGURE_ARGS+=	--extra-include-dirs="${LOCALBASE}/include/libxml2"

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
