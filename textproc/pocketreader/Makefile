# Created by: Simon Dick <simond@irrelevant.org>
# $FreeBSD: head/textproc/pocketreader/Makefile 421387 2016-09-05 19:23:42Z tijl $

PORTNAME=	pocketreader
PORTVERSION=	1.0
PORTREVISION=	2
CATEGORIES=	textproc linux
MASTER_SITES=	http://www.8ung.at/pocketreader/ \
		http://free.pages.at/pocketreader/
DISTNAME=	linux-bin
DIST_SUBDIR=	pocketreader

MAINTAINER=	simond@irrelevant.org
COMMENT=	Siemens PocketReader

USES=		linux
NO_BUILD=	yes
PLIST_FILES=	bin/pocketreader

WRKSRC=		${WRKDIR}/linux

do-install:
	${BRANDELF} -t Linux ${WRKSRC}/installfiles/pocketreader_static
	${CP} ${WRKSRC}/installfiles/pocketreader_static \
		${STAGEDIR}${PREFIX}/bin/pocketreader

.include <bsd.port.mk>
