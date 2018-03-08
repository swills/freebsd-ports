# $FreeBSD: head/databases/pecl-rrd1/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	rrd
DISTVERSION=	1.1.3
CATEGORIES=	databases pear

MAINTAINER=	daniel@blodan.se
COMMENT=	PHP bindings to rrd tool system

LICENSE=	PHP301

IGNORE_WITH_PHP=70 71 72
LIB_DEPENDS=	librrd.so:databases/rrdtool
USES=		php:pecl localbase pkgconfig

.include <bsd.port.mk>
