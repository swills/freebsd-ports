# $FreeBSD: head/textproc/hs-regex-pcre/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	regex-pcre
PORTVERSION=	0.94.4
PORTREVISION=	3
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	The PCRE backend to accompany regex-base

LICENSE=	BSD3CLAUSE

LIB_DEPENDS=	libpcre.so:devel/pcre

USE_CABAL=	regex-base

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
