# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: head/www/hs-fastcgi/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	fastcgi
PORTVERSION=	3001.0.2.4
PORTREVISION=	13
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Haskell library for writing FastCGI programs

LICENSE=	BSD3CLAUSE

USE_CABAL=	cgi>=3000.0.0

LIB_DEPENDS=	libfcgi.so:www/fcgi

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
