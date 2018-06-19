# $FreeBSD: head/dns/hs-gnuidn/Makefile 470870 2018-05-25 21:44:12Z tcberner $

PORTNAME=	gnuidn
PORTVERSION=	0.2.2
PORTREVISION=	2
CATEGORIES=	dns haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Bindings for GNU IDN

LICENSE=	GPLv3

USE_C2HS=	yes

USES=		pkgconfig
LIB_DEPENDS=	libidn.so:dns/libidn

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
