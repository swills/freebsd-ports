# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: head/devel/pear-File_Iterator/Makefile 455613 2017-12-05 19:52:41Z joneum $

PORTNAME=	File_Iterator
DISTVERSION=	1.4.5
CATEGORIES=	devel www pear
PKGNAMEPREFIX=	pear-

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR FileIterator implementation

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	pear-channel-phpunit>=20110327:devel/pear-channel-phpunit
RUN_DEPENDS=	pear-channel-phpunit>=20110327:devel/pear-channel-phpunit

USE_GITHUB=	yes
GH_ACCOUNT=	sebastianbergmann
GH_PROJECT=	php-file-iterator

NO_ARCH=	yes

NO_BUILD=	yes

PLIST_FILES=	${DATADIR}/Iterator.php

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/src/Iterator.php ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
