# Created by: Jose Garcia Juanino <jjuanino@gmail.com>
# $FreeBSD: head/www/mod_authnz_external24/Makefile 457367 2017-12-27 13:59:01Z mat $

PORTNAME=	mod_authnz_external
PORTVERSION=	3.3.2
CATEGORIES=	www
MASTER_SITES=	http://zhegan.in/files/
PKGNAMESUFFIX=	24
DIST_SUBDIR=	apache24

MAINTAINER=	eugene@zhegan.in
COMMENT=	Allows users authentication based on external mechanisms on apache 2.4

LICENSE=	APACHE20

USE_APACHE=	24
AP_FAST_BUILD=	yes
AP_GENPLIST=	yes
SHORTMODNAME=	authnz_external

PORTDOCS=	AUTHENTICATORS INSTALL README	\
		CHANGES UPGRADE INSTALL.HARDCODE

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	@${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
