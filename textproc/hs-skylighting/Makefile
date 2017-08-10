# $FreeBSD: head/textproc/hs-skylighting/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	skylighting
PORTVERSION=	0.3.3.1
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Syntax highlighting library with support for over one hundred languages

LICENSE=	BSD3CLAUSE

USE_CABAL=	aeson attoparsec blaze-html case-insensitive hxt mtl \
		pretty-show regex-pcre regex-pcre-builtin safe text utf8-string

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
