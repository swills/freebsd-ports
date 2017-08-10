# $FreeBSD: head/dns/hs-gnuidn/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	gnuidn
PORTVERSION=	0.2.2
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
