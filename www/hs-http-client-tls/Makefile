# $FreeBSD: head/www/hs-http-client-tls/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	http-client-tls
PORTVERSION=	0.3.5.1
PORTREVISION=	3
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	http-client backend using the connection package and tls library

LICENSE=	MIT

USE_CABAL=	connection>=0.2.2 data-default-class http-client>=0.3.5 \
		network tls>=1.1

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
