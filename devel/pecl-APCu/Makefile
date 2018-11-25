# Created by: John Chen <johnpupu@gmail.com>
# $FreeBSD: head/devel/pecl-APCu/Makefile 485771 2018-11-24 13:35:19Z joneum $

PORTNAME=	APCu
PORTVERSION=	5.1.14
CATEGORIES=	devel
DISTNAME=	${PORTNAME:tl}-${PORTVERSION}

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	APC User Caching

LICENSE=	PHP301
LICENSE_FILE=	${WRKSRC}/LICENSE

CONFLICTS_INSTALL=	pecl-APC

IGNORE_WITH_PHP=56
USES=		localbase php:pecl
PHP_MODNAME=	${PORTNAME:tl}

PLIST_FILES=	${DATADIR}/apc.php

post-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/apc.php ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
