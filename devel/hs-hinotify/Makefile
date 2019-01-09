# $FreeBSD: head/devel/hs-hinotify/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	hinotify
PORTVERSION=	0.3.10
PORTREVISION=	3
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Haskell binding to inotify

LICENSE=	BSD3CLAUSE

LIB_DEPENDS=	libinotify.so:devel/libinotify

USE_CABAL=	async hashable

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
