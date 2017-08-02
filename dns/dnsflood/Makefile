# Created by: krion
# $FreeBSD: head/dns/dnsflood/Makefile 447034 2017-08-01 17:07:58Z zi $

PORTNAME=	dnsflood
PORTVERSION=	1.20
CATEGORIES=	dns
MASTER_SITES=	http://www.adotout.com/ \
		ZI
EXTRACT_SUFX=	.tgz

MAINTAINER=	zi@FreeBSD.org
COMMENT=	DNS flood detector

LICENSE=	GPLv2

WRKSRC=		${WRKDIR}/dns_flood_detector_1.2

PLIST_FILES=	sbin/dns_flood_detector
USE_RC_SUBR=	dnsflood
PORTDOCS=	README

OPTIONS_DEFINE=	DOCS

pre-patch:
	@${LN} -sf ${WRKSRC}/makefiles/Makefile-FreeBSD ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/dns_flood_detector ${STAGEDIR}${PREFIX}/sbin

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
.for i in README
	${INSTALL_DATA} ${WRKSRC}/${i} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
