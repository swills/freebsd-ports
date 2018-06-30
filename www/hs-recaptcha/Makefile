# $FreeBSD: head/www/hs-recaptcha/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	recaptcha
PORTVERSION=	0.1.0.3
PORTREVISION=	4
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Functions for using the reCAPTCHA service in web applications

LICENSE=	BSD3CLAUSE

USE_CABAL=	HTTP>=3001.1.4 network>=2.6 network-uri>=2.6

FLAGS_ENABLE=	network-uri

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
