# $FreeBSD: head/dns/hs-gnuidn/Makefile 461362 2018-02-10 08:03:22Z tcberner $

PORTNAME=	gnuidn
PORTVERSION=	0.2.2
PORTREVISION=	1
CATEGORIES=	dns haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Bindings for GNU IDN

LICENSE=	GPLv3

USE_CABAL=	text
USE_C2HS=	yes

USES=		pkgconfig
LIB_DEPENDS=	libidn.so:dns/libidn

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
