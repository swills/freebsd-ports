# $FreeBSD: head/dns/hs-dns/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	dns
PORTVERSION=	2.0.10
CATEGORIES=	dns haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	DNS library in Haskell

LICENSE=	BSD3CLAUSE

USE_CABAL=	attoparsec blaze-builder conduit>=1.1 conduit-extra>=1.1 \
		iproute>=1.2.4 mtl network>=2.3 random resourcet safe

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
