# $FreeBSD: head/devel/hs-text-icu/Makefile 466648 2018-04-06 15:53:16Z jbeich $

PORTNAME=	text-icu
PORTVERSION=	0.7.0.1
PORTREVISION=	9
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Bindings to the ICU library

LICENSE=	BSD3CLAUSE

USE_CABAL=	text>=0.9.1.0

LIB_DEPENDS+=	libicui18n.so:devel/icu

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
