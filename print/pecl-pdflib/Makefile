# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD: head/print/pecl-pdflib/Makefile 438175 2017-04-10 15:08:47Z mat $

PORTNAME=	pdflib
PORTVERSION=	4.1.1
CATEGORIES=	print pear

MAINTAINER=	ale@FreeBSD.org
COMMENT=	PECL extension to create PDF on the fly

LICENSE=	PHP30

LIB_DEPENDS=	libpdf.so:print/pdflib

BROKEN_powerpc64=	Does not build

USES=		php:pecl
USE_PHP=	gd:build
PHP_MODNAME=	pdf

CONFIGURE_ARGS=	--with-pdflib=${LOCALBASE}

.include <bsd.port.mk>
