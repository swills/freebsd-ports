# $FreeBSD: head/www/hs-yesod-persistent/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	yesod-persistent
PORTVERSION=	1.4.2
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Some helpers for using Persistent from Yesod

LICENSE=	MIT

USE_CABAL=	blaze-builder conduit persistent persistent-template \
		resource-pool resourcet yesod-core

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
