# Created by: Yen-Ming Lee <leeym@FreeBSD.org>
# $FreeBSD: head/www/mod_uid/Makefile 464189 2018-03-11 17:38:45Z brnrd $

PORTNAME=	mod_uid
PORTVERSION=	1.1.0
CATEGORIES=	www
MASTER_SITES=	ftp://ftp.lexa.ru/pub/apache-rus/contrib/

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Apache module issuing the "correct" cookies for counting the site visitors

LICENSE=	APACHE20

USES=		apache:2.2
AP_FAST_BUILD=	yes
AP_GENPLIST=	yes
MODULENAME=	mod_uid2

PORTDOCS=	README.html

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
