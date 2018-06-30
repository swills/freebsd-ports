# $FreeBSD: head/www/hs-wai-extra/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	wai-extra
PORTVERSION=	3.0.22.1
PORTREVISION=	1
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Provides some basic WAI handlers and middleware

LICENSE=	MIT

USE_CABAL=	aeson ansi-terminal base64-bytestring blaze-builder \
		case-insensitive cookie data-default-class \
		fast-logger http-types iproute lifted-base \
		network old-locale resourcet streaming-commons \
		stringsearch unix-compat vault void \
		wai wai-logger word8 zlib

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
