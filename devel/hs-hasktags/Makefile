# $FreeBSD: head/devel/hs-hasktags/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	hasktags
PORTVERSION=	0.69.3
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Produces ctags "tags" and etags "TAGS" files for Haskell programs

LICENSE=	BSD3CLAUSE

USE_CABAL=	json>=0.5 utf8-string

EXECUTABLE=	hasktags

STANDALONE=	yes

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
