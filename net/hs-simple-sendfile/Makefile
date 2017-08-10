# $FreeBSD: head/net/hs-simple-sendfile/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	simple-sendfile
PORTVERSION=	0.2.25
CATEGORIES=	net haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Cross-platform library for the sendfile() system call

LICENSE=	BSD3CLAUSE

USE_CABAL=	conduit>=1.0 conduit-extra>=1.0 network resourcet

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
