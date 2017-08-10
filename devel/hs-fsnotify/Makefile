# $FreeBSD: head/devel/hs-fsnotify/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	fsnotify
PORTVERSION=	0.2.1
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Cross-platform library for file system notifications

LICENSE=	BSD3CLAUSE

USE_CABAL=	async>=2.0.1 hinotify>=0.3.7 text>=0.11.0 unix-compat>=0.2

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
