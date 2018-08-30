# Created by: Dan Langille <dvl@FreeBSD.org>
# $FreeBSD: head/security/cyberchef/Makefile 478028 2018-08-25 13:11:27Z dvl $

PORTNAME=	cyberchef
PORTVERSION=	8.5.0
PORTREVISION=	1
DISTVERSIONPREFIX=	v
CATEGORIES=	security

MAINTAINER=	dvl@FreeBSD.org
COMMENT=	Cyber operations within a web browser

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	gchq
GH_PROJECT=	CyberChef

NO_BUILD=       yes
NO_ARCH=        yes

do-install:
	(cd ${WRKSRC}/src/web/static && ${COPYTREE_SHARE} images       ${STAGEDIR}${WWWDIR}/)
	${INSTALL} ${WRKSRC}/src/web/html/index.html                   ${STAGEDIR}${WWWDIR}/
	

.include <bsd.port.mk>
