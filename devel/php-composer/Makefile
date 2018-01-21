# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/devel/php-composer/Makefile 459283 2018-01-17 19:18:10Z madpilot $

PORTNAME=	composer
DISTVERSION=	1.6.2
CATEGORIES=	devel
MASTER_SITES=	http://getcomposer.org/download/${DISTVERSION}/
PKGNAMEPREFIX=	php-
DISTNAME=	composer
EXTRACT_SUFX=	.phar
DIST_SUBDIR=	${PORTNAME}-${PORTVERSION}

MAINTAINER=	cyberbotx@cyberbotx.com
COMMENT=	Dependency Manager for PHP

LICENSE=	MIT

RUN_DEPENDS=	ca_root_nss>0:security/ca_root_nss

NO_ARCH=	yes
NO_BUILD=	yes
NO_WRKSUBDIR=	yes
USES=		php
USE_PHP=	intl openssl phar json ctype filter mbstring

PLIST_FILES=	bin/composer \
		bin/composer.phar

do-extract:
	${MKDIR} ${WRKSRC}/
	${CP} ${_DISTDIR}/composer.phar ${WRKSRC}/

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/composer.phar ${STAGEDIR}${PREFIX}/bin/
	${LN} -s composer.phar ${STAGEDIR}${PREFIX}/bin/composer

.include <bsd.port.mk>
