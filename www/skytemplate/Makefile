# Created by: Mun-Kyo Seo <munggo@gmail.com>
# $FreeBSD: head/www/skytemplate/Makefile 417719 2016-06-28 14:00:45Z mat $

PORTNAME=	skytemplate
PORTVERSION=	1.4.0
CATEGORIES=	www
MASTER_SITES=	http://daddy.withsky.net/SkyTemplate/download/ \
		http://mirror.pmy.lv/SkyTemplate/download/
DISTNAME=	SkyTemplate.v${PORTVERSION:S/.//g}

MAINTAINER=	munggo@gmail.com
COMMENT=	Yet another PHP compiling template engine

USES=		php:web
NO_BUILD=	yes

SUB_FILES=	pkg-message

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
.for f in class.SkyTemplate.php class.SkyTemplate_withDaddy.php
	${INSTALL_DATA} ${WRKSRC}/$f ${STAGEDIR}${DATADIR}
	${MKDIR} ${STAGEDIR}${DATADIR}/SkyTpl
	${INSTALL_DATA} ${WRKSRC}/SkyTpl/* ${STAGEDIR}${DATADIR}/SkyTpl
.endfor

.include <bsd.port.mk>
