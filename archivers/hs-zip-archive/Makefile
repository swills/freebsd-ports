# $FreeBSD: head/archivers/hs-zip-archive/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	zip-archive
PORTVERSION=	0.3.1.1
CATEGORIES=	archivers haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Library for creating and modifying zip archives

LICENSE=	BSD3CLAUSE

USE_CABAL=	digest>=0.0.0.1 mtl old-time text>=0.11 zlib

FLAGS_DEFINE=		EXECUTABLE

EXECUTABLE_DESC=		Build the Zip executable
EXECUTABLE_FLAG_ENABLE=		executable
EXECUTABLE_FLAG_EXECUTABLE=	Zip

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
