# $FreeBSD: head/security/hs-tls-session-manager/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	tls-session-manager
PORTVERSION=	0.0.0.0
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	TLS session manager with limitation, automatic pruning, energy saving and replay resistance

LICENSE=	BSD3CLAUSE

USE_CABAL=	auto-update clock psqueues tls

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
