# $FreeBSD: head/devel/hs-text-icu/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	text-icu
PORTVERSION=	0.7.0.1
PORTREVISION=	14
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Bindings to the ICU library

LICENSE=	BSD3CLAUSE

LIB_DEPENDS+=	libicui18n.so:devel/icu

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
