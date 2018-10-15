# Created by: Ilya Bakulin <webmaster@kibab.com>
# $FreeBSD: head/devel/php5-thrift/Makefile 481545 2018-10-08 15:08:13Z antoine $

PORTNAME=	thrift
PORTVERSION=	${THRIFT_PORTVERSION}
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	APACHE/thrift/${PORTVERSION}
PKGNAMEPREFIX=	${PHP_PKGNAMEPREFIX}

MAINTAINER=	webmaster@kibab.com
COMMENT=	PHP interface to Thrift

USES=		php:ext
PHP_MODNAME=	thrift_protocol
IGNORE_WITH_PHP=	70 71 72 73

DISTINFO_FILE=	${.CURDIR}/../thrift/distinfo
WRKSRC_SUBDIR=	lib/php/src/ext/thrift_protocol

.include "${.CURDIR}/../thrift/bsd.thrift.mk"
.include <bsd.port.mk>
