# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: head/devel/pear-TheSeer_fDOMDocument/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	fDOMDocument
PORTVERSION=	1.6.6
CATEGORIES=	devel www pear
PKGNAMEPREFIX=	${PEAR_PKGNAMEPREFIX}TheSeer_

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Extension to PHP standard DOM

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=	php:flavors pear:env
USE_GITHUB=	yes
GH_ACCOUNT=	theseer
GH_PROJECT=	fDOMDocument

USE_PHP=	dom xml
PEAR_CHANNEL=	theseer
PEAR_CHANNEL_VER=	>=20120501

NO_BUILD=	yes

PHP_DIR=	share/PHP

PLIST_FILES=	${PHP_DIR}/${PORTNAME}/fDOMDocument.php

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/${PHP_DIR}/${PORTNAME}
	${INSTALL_SCRIPT} ${WRKSRC}/src/fDOMDocument.php \
		${STAGEDIR}${PREFIX}/${PHP_DIR}/${PORTNAME}

.include <bsd.port.mk>
