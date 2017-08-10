# $FreeBSD: head/devel/hs-text-icu/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	text-icu
PORTVERSION=	0.7.0.1
PORTREVISION=	5
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Bindings to the ICU library

LICENSE=	BSD3CLAUSE

USE_CABAL=	text>=0.9.1.0

LIB_DEPENDS+=	libicui18n.so:devel/icu

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
