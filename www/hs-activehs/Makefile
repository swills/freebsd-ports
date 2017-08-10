# $FreeBSD: head/www/hs-activehs/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	activehs
PORTVERSION=	0.3.2
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Haskell code presentation tool

LICENSE=	BSD3CLAUSE

USE_CABAL=	activehs-base blaze-html blaze-markup cmdargs data-pprint \
		dia-base dia-functions exceptions haskell-src-exts \
		highlighting-kate hint hoogle mtl pandoc pureMD5 \
		QuickCheck simple-reflect snap-core snap-server split syb \
		text utf8-string

STANDALONE=	yes
EXECUTABLE=	activehs

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
