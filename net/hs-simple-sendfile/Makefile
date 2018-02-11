# $FreeBSD: head/net/hs-simple-sendfile/Makefile 461362 2018-02-10 08:03:22Z tcberner $

PORTNAME=	simple-sendfile
PORTVERSION=	0.2.25
PORTREVISION=	1
CATEGORIES=	net haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Cross-platform library for the sendfile() system call

LICENSE=	BSD3CLAUSE

USE_CABAL=	conduit>=1.0 conduit-extra>=1.0 network resourcet

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
