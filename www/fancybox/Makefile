# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/www/fancybox/Makefile 480397 2018-09-22 16:43:08Z sunpoet $

PORTNAME=	fancybox
PORTVERSION=	3.4.2
DISTVERSIONPREFIX=	v
CATEGORIES=	www

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	JavaScript library for image/html/multimedia content display

LICENSE=	GPLv3

USES=		cpe

NO_ARCH=	yes
NO_BUILD=	yes

GH_ACCOUNT=	fancyapps
USE_GITHUB=	yes

CPE_VENDOR=	fancybox_project

do-install:
	${MKDIR} ${STAGEDIR}${WWWDIR}/
	cd ${WRKSRC}/dist/ && ${COPYTREE_SHARE} . ${STAGEDIR}${WWWDIR}/

.include <bsd.port.mk>
