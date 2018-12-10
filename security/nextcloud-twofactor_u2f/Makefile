# Created by: Bernard Spil <brnrd@freebsd.org>
# $FreeBSD: head/security/nextcloud-twofactor_u2f/Makefile 487174 2018-12-10 14:54:05Z brnrd $

PORTNAME=	twofactor_u2f
PORTVERSION=	2.0.3
CATEGORIES=	security
MASTER_SITES=	https://github.com/${PKGNAMEPREFIX:S/-//}/${PORTNAME}/releases/download/${DISTVERSIONPREFIX}${PORTVERSION}/
PKGNAMEPREFIX=	nextcloud-
PKGNAMESUFFIX=	${PHP_PKGNAMESUFFIX}
DISTNAME=	${PORTNAME}
DISTVERSIONPREFIX=	v
DIST_SUBDIR=	${PKGNAMEPREFIX:S/-//}/${DISTNAME}-${DISTVERSIONPREFIX}${PORTVERSION}

MAINTAINER=	brnrd@FreeBSD.org
COMMENT=	U2F multi-factor auth app for Nextcloud

LICENSE=	AGPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	nextcloud${PHP_PKGNAMESUFFIX}>=15:www/nextcloud@${PHP_FLAVOR}

USES=		php:flavors
NO_BUILD=	yes
NO_ARCH=	yes

WWWDIR=		${PREFIX}/www/nextcloud/apps-pkg/${PORTNAME}

do-install:
	${MKDIR} ${STAGEDIR}${WWWDIR}
	(cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${WWWDIR})
	${RM} ${STAGEDIR}${WWWDIR}/COPYING

.include <bsd.port.mk>
