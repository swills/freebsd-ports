# $FreeBSD: head/net/hs-gsasl/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	gsasl
PORTVERSION=	0.3.6
PORTREVISION=	5
CATEGORIES=	net haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Bindings for GNU libgsasl

LICENSE=	GPLv3

USES=		pkgconfig
LIB_DEPENDS=	libgsasl.so:security/gsasl

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
