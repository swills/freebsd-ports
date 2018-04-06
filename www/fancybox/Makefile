# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/www/fancybox/Makefile 466655 2018-04-06 16:26:30Z sunpoet $

PORTNAME=	fancybox
PORTVERSION=	3.3.1
DISTVERSIONPREFIX=	v
CATEGORIES=	www

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	JavaScript library for image/html/multimedia content display

LICENSE=	GPLv3

NO_ARCH=	yes
NO_BUILD=	yes
USES=		cpe

GH_ACCOUNT=	fancyapps
USE_GITHUB=	yes

CPE_VENDOR=	fancybox_project

do-install:
	${MKDIR} ${STAGEDIR}${WWWDIR}/
	cd ${WRKSRC}/dist/ && ${COPYTREE_SHARE} . ${STAGEDIR}${WWWDIR}/

.include <bsd.port.mk>
