# Created by: gahr
# $FreeBSD: head/www/caldavzap/Makefile 417719 2016-06-28 14:00:45Z mat $

PORTNAME=	caldavzap
PORTVERSION=	0.13.1
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	https://www.inf-it.com/
DISTNAME=	CalDavZAP_${PORTVERSION}

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	CalDAV web client implementation

LICENSE=	AGPLv3

WRKSRC=		${WRKDIR}/${PORTNAME}
USES=		php zip
NO_BUILD=	yes

do-install:
	${MKDIR} ${STAGEDIR}${WWWDIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${WWWDIR}

.include <bsd.port.mk>
