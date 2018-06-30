# $FreeBSD: head/net/hs-gsasl/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	gsasl
PORTVERSION=	0.3.6
PORTREVISION=	4
CATEGORIES=	net haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Bindings for GNU libgsasl

LICENSE=	GPLv3

USES=		pkgconfig
LIB_DEPENDS=	libgsasl.so:security/gsasl

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
