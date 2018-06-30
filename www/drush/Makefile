# Created by: Thomas Sandford <freebsduser@paradisegreen.co.uk>
# $FreeBSD: head/www/drush/Makefile 473390 2018-06-26 15:33:26Z mfechner $

PORTNAME=	drush
DISTVERSION=	8.1.16
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	https://github.com/drush-ops/drush/releases/download/${DISTVERSION}/
PKGNAMESUFFIX=	${PHP_PKGNAMESUFFIX}
DISTNAME=	drush
EXTRACT_SUFX=	.phar

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	Drupal command line and scripting interface

LICENSE=	GPLv2+

NO_BUILD=	yes
NO_WRKSUBDIR=	yes
NO_ARCH=	yes

USES=		php:cli,flavors
# set php requirements same as drupal itself
USE_PHP=	gd pcre session mbstring ctype json hash simplexml dom pdo filter phar

PLIST_FILES=	bin/drush bin/drush.phar

do-extract:
	@${MKDIR} ${WRKSRC}/
	${CP} ${_DISTDIR}/drush.phar ${WRKSRC}/

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/drush.phar ${STAGEDIR}${PREFIX}/bin/
	${LN} -s drush.phar ${STAGEDIR}${PREFIX}/bin/drush

.include <bsd.port.mk>
