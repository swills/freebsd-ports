# $FreeBSD: head/www/hs-http-api-data/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	http-api-data
PORTVERSION=	0.4
PORTREVISION=	1
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Convert Haskell data types to and from HTTP API data

LICENSE=	GPLv3

USE_CABAL=	attoparsec attoparsec-iso8601 base-compat cookie hashable \
		http-types tagged time-locale-compat unordered-containers \
		uri-bytestring uuid-types

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
