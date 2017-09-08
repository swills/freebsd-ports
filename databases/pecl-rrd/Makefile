# $FreeBSD: head/databases/pecl-rrd/Makefile 449402 2017-09-07 14:48:40Z jrm $

PORTNAME=	rrd
DISTVERSION=	2.0.1
PORTREVISION=	1
CATEGORIES=	databases pear

MAINTAINER=	flo@FreeBSD.org
COMMENT=	PHP bindings to rrd tool system

LICENSE=	PHP301

IGNORE_WITH_PHP=56
LIB_DEPENDS=	librrd.so:databases/rrdtool
USES=		php:pecl localbase pkgconfig

.include <bsd.port.mk>
