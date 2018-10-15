# $FreeBSD: head/databases/pecl-rrd1/Makefile 481545 2018-10-08 15:08:13Z antoine $

PORTNAME=	rrd
DISTVERSION=	1.1.3
CATEGORIES=	databases pear

MAINTAINER=	daniel@blodan.se
COMMENT=	PHP bindings to rrd tool system

LICENSE=	PHP301

IGNORE_WITH_PHP=70 71 72 73
LIB_DEPENDS=	librrd.so:databases/rrdtool
USES=		php:pecl localbase pkgconfig

.include <bsd.port.mk>
