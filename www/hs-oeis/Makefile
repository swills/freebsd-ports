# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: head/www/hs-oeis/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	oeis
PORTVERSION=	0.3.9
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Interface to the Online Encyclopedia of Integer Sequences (OEIS)

LICENSE=	BSD3CLAUSE

USE_CABAL=	HTTP>=4000.2 network>=2.6 network-uri>=2.6

FLAGS_ENABLE=	network-uri

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
