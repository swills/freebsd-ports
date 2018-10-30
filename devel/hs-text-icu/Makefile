# $FreeBSD: head/devel/hs-text-icu/Makefile 482830 2018-10-23 11:35:03Z jbeich $

PORTNAME=	text-icu
PORTVERSION=	0.7.0.1
PORTREVISION=	13
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Bindings to the ICU library

LICENSE=	BSD3CLAUSE

LIB_DEPENDS+=	libicui18n.so:devel/icu

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
