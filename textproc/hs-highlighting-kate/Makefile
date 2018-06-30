# $FreeBSD: head/textproc/hs-highlighting-kate/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	highlighting-kate
PORTVERSION=	0.6.4
PORTREVISION=	3
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Syntax highlighting

LICENSE=	GPLv2

USE_CABAL=	blaze-html>=0.4.2 mtl regex-pcre-builtin>=0.94.4.8.8.35 \
		utf8-string

FLAGS_DEFINE=			EXECUTABLE

EXECUTABLE_DESC=		Build the executable
EXECUTABLE_FLAG_ENABLE=		executable
EXECUTABLE_FLAG_EXECUTABLE=	highlighting-kate

FLAGS_DISABLE=	pcre-light

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
