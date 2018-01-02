# Created by: John Chen <johnpupu@gmail.com>
# $FreeBSD: head/devel/pecl-APCu4/Makefile 456296 2017-12-14 13:57:28Z tz $

PORTNAME=	APCu
PORTVERSION=	4.0.11
PORTREVISION=	1
CATEGORIES=	devel
PKGNAMESUFFIX=	4
DISTNAME=	${PORTNAME:tl}-${PORTVERSION}

MAINTAINER=	johnpupu@gmail.com
COMMENT=	APC User Caching

LICENSE=	PHP301

CONFLICTS_INSTALL=	pecl-APC

PORTSCOUT=	limit:^4\.

IGNORE_WITH_PHP=70 71 72
USES=		localbase php:pecl
PHP_MODNAME=	${PORTNAME:tl}

PLIST_FILES=	${DATADIR}/apc.php

post-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/apc.php ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
