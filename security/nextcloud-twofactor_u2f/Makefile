# Created by: Bernard Spil <brnrd@freebsd.org>
# $FreeBSD: head/security/nextcloud-twofactor_u2f/Makefile 465957 2018-03-30 10:10:25Z brnrd $

PORTNAME=	twofactor_u2f
PORTVERSION=	1.5.2
CATEGORIES=	security
MASTER_SITES=	https://github.com/${PKGNAMEPREFIX:S/-//}/${PORTNAME}/releases/download/${DISTVERSIONPREFIX}${PORTVERSION}/
PKGNAMEPREFIX=	nextcloud-
DISTNAME=	${PORTNAME}
DIST_SUBDIR=	${PKGNAMEPREFIX:S/-//}/${DISTNAME}-${DISTVERSIONPREFIX}${PORTVERSION}

MAINTAINER=	brnrd@freebsd.org
COMMENT=	U2F multi-factor auth app for Nextcloud

LICENSE=	AGPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	nextcloud>=12:www/nextcloud

USES=		php
NO_BUILD=	yes
NO_ARCH=	yes

WWWDIR=		${PREFIX}/www/nextcloud/apps/${PORTNAME}

do-install:
	${MKDIR} ${STAGEDIR}${WWWDIR}
	(cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${WWWDIR})
	${RM} ${STAGEDIR}${WWWDIR}/COPYING

.include <bsd.port.mk>
