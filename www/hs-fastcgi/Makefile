# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: head/www/hs-fastcgi/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	fastcgi
PORTVERSION=	3001.0.2.4
PORTREVISION=	9
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Haskell library for writing FastCGI programs

LICENSE=	BSD3CLAUSE

USE_CABAL=	cgi>=3000.0.0

LIB_DEPENDS=	libfcgi.so:www/fcgi

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
