# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/www/gregarius/Makefile 422175 2016-09-15 01:41:28Z swills $

PORTNAME=	gregarius
PORTVERSION=	0.6.1
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Web-based RSS/RDF/ATOM news aggregator

LICENSE=	GPLv2

USE_PHP=	gettext iconv mbstring session xml zlib
NO_BUILD=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}

do-install:
	${MKDIR} ${STAGEDIR}${WWWDIR}
	${CP} -R ${WRKSRC}/ ${STAGEDIR}${WWWDIR}

.include <bsd.port.mk>
