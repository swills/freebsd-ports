# Created by: Daniel Gerzo <danger@rulez.sk>
# $FreeBSD: head/www/mod_domaintree/Makefile 464189 2018-03-11 17:38:45Z brnrd $

PORTNAME=	mod_domaintree
PORTVERSION=	1.6
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	http://dev.iworks.at/mod_domaintree/
EXTRACT_SUFX=	.tgz

MAINTAINER=	danger@FreeBSD.org
COMMENT=	Hostname to filesystem mapper for Apache 2

WRKSRC=		${WRKDIR}/${PORTNAME}
USES=		apache:2.2+
AP_FAST_BUILD=	yes
AP_GENPLIST=	yes

PORTDOCS=	LICENSE.txt ChangeLog

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
