# $FreeBSD: head/net-im/hs-haskell-xmpp/Makefile 470870 2018-05-25 21:44:12Z tcberner $

PORTNAME=	haskell-xmpp
PORTVERSION=	1.0.2
PORTREVISION=	4
CATEGORIES=	net-im haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Haskell XMPP library based on HaXml & STM

LICENSE=	BSD3CLAUSE

USE_CABAL=	HaXml>=1.23.3 html mtl>=1.0 network \
		polyparse random regex-compat utf8-string

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
