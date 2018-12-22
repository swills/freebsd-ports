# Created by: Bernard Spil <brnrd@freebsd.org>
# $FreeBSD: head/security/nextcloud-passman/Makefile 487797 2018-12-19 13:29:39Z brnrd $

PORTNAME=	passman
PORTVERSION=	2.2.1
CATEGORIES=	security
MASTER_SITES=	https://releases.passman.cc/
PKGNAMEPREFIX=	nextcloud-
PKGNAMESUFFIX=	${PHP_PKGNAMESUFFIX}
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	brnrd@FreeBSD.org
COMMENT=	Full featured password manager for Nextcloud

LICENSE=	AGPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	nextcloud${PHP_PKGNAMESUFFIX}>=14:www/nextcloud@${PHP_FLAVOR}

WRKSRC=		${WRKDIR}/${PORTNAME}

USES=		php:flavors
NO_BUILD=	yes
NO_ARCH=	yes

WWWDIR=		${PREFIX}/www/nextcloud/apps-pkg/${PORTNAME}

do-install:
	${MKDIR} ${STAGEDIR}${WWWDIR}
	(cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${WWWDIR})

post-install:
	${RM} ${STAGEDIR}${WWWDIR}/COPYING ${STAGEDIR}${WWWDIR}/LICENSE

.include <bsd.port.mk>
