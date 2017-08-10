# $FreeBSD: head/devel/hs-conduit-extra/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	conduit-extra
PORTVERSION=	1.1.16
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Batteries included conduit: adapters for common libraries

LICENSE=	MIT

USE_CABAL=	attoparsec>=0.10 blaze-builder>=0.3 conduit>=1.1 \
		monad-control network>=2.3 primitive>=0.5 resourcet>=1.1 \
		stm streaming-commons>=0.1.11 text transformers-base

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
