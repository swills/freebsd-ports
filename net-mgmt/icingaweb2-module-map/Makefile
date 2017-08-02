# $FreeBSD: head/net-mgmt/icingaweb2-module-map/Makefile 446853 2017-07-28 21:30:50Z lme $

PORTNAME=	icingaweb2-module-map
PORTVERSION=	0.0.1.20170728
CATEGORIES=	net-mgmt www

MAINTAINER=	lme@FreeBSD.org
COMMENT=	Display hosts on OpenStreetMap

LICENSE=	GPLv2

RUN_DEPENDS=	icingaweb2>=2.4.1:net-mgmt/icingaweb2

USE_GITHUB=	yes
GH_ACCOUNT=	nbuchwitz
GH_TAGNAME=	db8cb8f

NO_BUILD=	yes
NO_ARCH=	yes

WWWDIR?=	${PREFIX}/www/icingaweb2/modules/${PORTNAME:C/^.*-//}

do-install:
	@${MKDIR} ${STAGEDIR}${WWWDIR}
	(cd ${WRKSRC} && \
		${COPYTREE_SHARE} . ${STAGEDIR}${WWWDIR})

.include <bsd.port.mk>
