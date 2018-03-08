# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: head/devel/pear-File_Iterator/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	File_Iterator
DISTVERSION=	1.4.5
CATEGORIES=	devel www pear
PKGNAMEPREFIX=	${PEAR_PKGNAMEPREFIX}

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR FileIterator implementation

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=	pear:env
PEAR_CHANNEL=	phpunit
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
