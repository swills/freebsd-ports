# Created by: Gea-Suan Lin <gslin@ccca.nctu.edu.tw>
# $FreeBSD: head/www/mod_limitipconn2/Makefile 441903 2017-05-28 09:01:09Z amdmi3 $

PORTNAME=	mod_limitipconn
PORTVERSION=	0.24
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	http://dominia.org/djao/limit/
PKGNAMEPREFIX=	${APACHE_PKGNAMEPREFIX}
PKGNAMESUFFIX=	2
DIST_SUBDIR=	apache2

MAINTAINER=	ychsiao@ychsiao.org
COMMENT=	Allows you to limit the number of simultaneous connexions

LICENSE=	APACHE20

USE_APACHE=	22+
USES=		tar:bzip2

AP_FAST_BUILD=	yes
AP_GENPLIST=	yes

PORTDOCS=	ChangeLog INSTALL README

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
