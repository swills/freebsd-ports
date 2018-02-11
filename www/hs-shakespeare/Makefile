# $FreeBSD: head/www/hs-shakespeare/Makefile 461362 2018-02-10 08:03:22Z tcberner $

PORTNAME=	shakespeare
PORTVERSION=	2.0.13
PORTREVISION=	1
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Toolkit for making compile-time interpolated templates

LICENSE=	MIT

USE_CABAL=	aeson blaze-html blaze-markup exceptions parsec text

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
