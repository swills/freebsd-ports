# Created by: John Chen <johnpupu@gmail.com>
# $FreeBSD: head/devel/pecl-APCu/Makefile 442246 2017-05-31 17:36:18Z pawel $

PORTNAME=	APCu
PORTVERSION=	5.1.8
CATEGORIES=	devel
DISTNAME=	${PORTNAME:tl}-${PORTVERSION}

MAINTAINER=	johnpupu@gmail.com
COMMENT=	APC User Caching

LICENSE=	PHP301

CONFLICTS_INSTALL=	pecl-APC

IGNORE_WITH_PHP=56
USES=		localbase php:pecl
PHP_MODNAME=	${PORTNAME:tl}

.include <bsd.port.mk>
