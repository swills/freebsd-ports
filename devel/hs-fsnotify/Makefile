# $FreeBSD: head/devel/hs-fsnotify/Makefile 470870 2018-05-25 21:44:12Z tcberner $

PORTNAME=	fsnotify
PORTVERSION=	0.2.1.1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Cross-platform library for file system notifications

LICENSE=	BSD3CLAUSE

USE_CABAL=	async>=2.0.1 hinotify>=0.3.7 unix-compat>=0.2

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
