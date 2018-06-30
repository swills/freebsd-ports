# $FreeBSD: head/textproc/hs-regex-pcre-builtin/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	regex-pcre-builtin
PORTVERSION=	0.94.4.8.8.35
PORTREVISION=	6
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Replaces/Enhances Text.Regex

LICENSE=	BSD3CLAUSE

USE_CABAL=	regex-base>=0.93

LIB_DEPENDS=	libpcre.so:devel/pcre

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
