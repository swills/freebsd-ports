# $FreeBSD: head/devel/hs-hashed-storage/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	hashed-storage
PORTVERSION=	0.5.11
PORTREVISION=	3
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Hashed file storage support code

LICENSE=	BSD3CLAUSE

USE_CABAL=	dataenc extensible-exceptions mmap>=0.5 mtl zlib

FLAGS_DISABLE=		test

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
