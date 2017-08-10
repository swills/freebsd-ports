# $FreeBSD: head/devel/hs-hinotify/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	hinotify
PORTVERSION=	0.3.9
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Haskell binding to inotify

LICENSE=	BSD3CLAUSE

LIB_DEPENDS=	libinotify.so:devel/libinotify

USE_CABAL=	async

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
