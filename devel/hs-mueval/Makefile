# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: head/devel/hs-mueval/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	mueval
PORTVERSION=	0.9.3
PORTREVISION=	3
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Safely evaluate pure Haskell expressions

LICENSE=	BSD3CLAUSE

USE_CABAL=	extensible-exceptions hint>=0.3.1 mtl>2 QuickCheck show>=0.3 \
		simple-reflect utf8-string

EXECUTABLE=	mueval mueval-core

CONFIGURE_ARGS+=	--ghc-options="-dynamic"

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
