# Created by: John Chen <johnpupu@gmail.com>
# $FreeBSD: head/devel/pecl-APCu4/Makefile 442246 2017-05-31 17:36:18Z pawel $

PORTNAME=	APCu
PORTVERSION=	4.0.11
CATEGORIES=	devel
PKGNAMESUFFIX=	4
DISTNAME=	${PORTNAME:tl}-${PORTVERSION}

MAINTAINER=	johnpupu@gmail.com
COMMENT=	APC User Caching

LICENSE=	PHP301

CONFLICTS_INSTALL=	pecl-APC

PORTSCOUT=	limit:^4\.

IGNORE_WITH_PHP=70 71
USES=		localbase php:pecl
PHP_MODNAME=	${PORTNAME:tl}

.include <bsd.port.mk>
