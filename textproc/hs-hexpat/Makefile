# $FreeBSD: head/textproc/hs-hexpat/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	hexpat
PORTVERSION=	0.20.13
PORTREVISION=	4
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	XML parser/formatter based on expat

LICENSE=	BSD3CLAUSE

LIB_DEPENDS=	libexpat.so:textproc/expat2

USE_CABAL=	List>=0.4.2 utf8-string>=0.3

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
