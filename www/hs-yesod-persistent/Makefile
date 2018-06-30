# $FreeBSD: head/www/hs-yesod-persistent/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	yesod-persistent
PORTVERSION=	1.6.0
PORTREVISION=	1
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Some helpers for using Persistent from Yesod

LICENSE=	MIT

USE_CABAL=	blaze-builder conduit persistent persistent-template \
		resource-pool resourcet yesod-core

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
