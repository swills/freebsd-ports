# $FreeBSD: head/security/hs-tls-session-manager/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	tls-session-manager
PORTVERSION=	0.0.0.0
PORTREVISION=	4
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	TLS session manager with limitation, automatic pruning, energy saving and replay resistance

LICENSE=	BSD3CLAUSE

USE_CABAL=	auto-update clock psqueues tls

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
