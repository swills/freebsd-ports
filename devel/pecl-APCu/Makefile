# Created by: John Chen <johnpupu@gmail.com>
# $FreeBSD: head/devel/pecl-APCu/Makefile 492977 2019-02-15 08:16:36Z joneum $

PORTNAME=	APCu
PORTVERSION=	5.1.17
CATEGORIES=	devel
DISTNAME=	${PORTNAME:tl}-${PORTVERSION}

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	APC User Caching

LICENSE=	PHP301
LICENSE_FILE=	${WRKSRC}/LICENSE

CONFLICTS_INSTALL=	pecl-APC

USES=		localbase php:pecl
PHP_MODNAME=	${PORTNAME:tl}

PLIST_FILES=	${DATADIR}/apc.php

post-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/apc.php ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
