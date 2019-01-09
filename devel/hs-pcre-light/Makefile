# $FreeBSD: head/devel/hs-pcre-light/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	pcre-light
PORTVERSION=	0.4.0.4
PORTREVISION=	4
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Small, efficient, and portable regex library for Perl 5 compatible

LICENSE=	BSD3CLAUSE

USES=		pkgconfig
LIB_DEPENDS=	libpcre.so:devel/pcre

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
