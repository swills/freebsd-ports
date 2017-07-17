# Created by: John Chen <johnpupu@gmail.com>
# $FreeBSD: head/devel/pecl-pthreads/Makefile 445623 2017-07-13 00:00:30Z sunpoet $

PORTNAME=	pthreads
PORTVERSION=	3.1.6
CATEGORIES=	devel

MAINTAINER=	johnpupu@gmail.com
COMMENT=	Compatible Threading API for PHP7.0+

LICENSE=	PHP301

CFLAGS+=	-I${LOCALBASE}/include

USES=		php:pecl
IGNORE_WITH_PHP=56 71

.include <bsd.port.options.mk>

.if !defined(PHP_ZTS) && exists(${LOCALBASE}/bin/php)
PHP_ZTS!=	${LOCALBASE}/bin/php -r 'phpinfo();' | ${GREP} 'Thread Safety' | ${AWK} -F '=> ' '{print $$2}'
.else
PHP_ZTS=	disabled
.endif

.if ${PHP_ZTS} == "disabled"
IGNORE=		pthreads requires ZTS, please re-compile PHP with ZTS enabled
.endif

.include <bsd.port.mk>
