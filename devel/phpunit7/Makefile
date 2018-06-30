# $FreeBSD: head/devel/phpunit7/Makefile 473114 2018-06-23 07:45:31Z joneum $

PORTNAME=	phpunit
DISTVERSION=	7.2.6
CATEGORIES=	devel www
MASTER_SITES=	https://phar.phpunit.de/
PKGNAMESUFFIX=	7${PHP_PKGNAMESUFFIX}
EXTRACT_SUFX=	.phar

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Testing framework for unit tests

LICENSE=	BSD3CLAUSE

IGNORE_WITH_PHP=	56

CONFLICTS_INSTALL=	phpunit

USES=		cpe php:flavors
CPE_VENDOR=	phpunit_project
USE_PHP=	dom json spl pcre phar

NO_ARCH=	yes
NO_BUILD=	yes

PLIST_FILES=	bin/phpunit

# Download isn't compressed or aggregated, it's just the single file
do-extract:
	${CP} ${DISTDIR}/${DISTFILES} ${WRKDIR}/${PORTNAME}

do-install:
	${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME} \
		${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
