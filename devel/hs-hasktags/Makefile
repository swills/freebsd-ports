# $FreeBSD: head/devel/hs-hasktags/Makefile 461362 2018-02-10 08:03:22Z tcberner $

PORTNAME=	hasktags
PORTVERSION=	0.69.3
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Produces ctags "tags" and etags "TAGS" files for Haskell programs

LICENSE=	BSD3CLAUSE

USE_CABAL=	json>=0.5 utf8-string

EXECUTABLE=	hasktags

STANDALONE=	yes

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
