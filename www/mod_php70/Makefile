# Created by:	marcus@FreeBSD.org
# $FreeBSD: head/www/mod_php70/Makefile 419057 2016-07-25 20:01:02Z rene $

CATEGORIES=	www devel
PKGNAMEPREFIX=	mod_

MAINTAINER=	ports@FreeBSD.org

PHP_PORT=	lang/php70
MASTERDIR=	${.CURDIR}/../../${PHP_PORT}

OPTIONS_DEFINE=	AP2FILTER
AP2FILTER_DESC=	Use Apache 2.x filter interface (experimental)
OPTIONS_EXCLUDE=	CGI CLI FPM EMBED

.include "${MASTERDIR}/Makefile"
