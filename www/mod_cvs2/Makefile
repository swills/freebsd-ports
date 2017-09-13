# Created by: Clement Laforet <clement@FreeBSD.org>
# $FreeBSD: head/www/mod_cvs2/Makefile 449446 2017-09-08 09:01:47Z amdmi3 $

PORTNAME=	mod_cvs
PORTVERSION=	0.5.91
PORTREVISION=	2
CATEGORIES=	www
MASTER_SITES=	http://resare.com/noa/mod_cvs/dist/
PKGNAMEPREFIX=	${APACHE_PKGNAMEPREFIX}

MAINTAINER=	apache@FreeBSD.org
COMMENT=	Module that makes Apache 2 CVS aware

LICENSE=	AFL12
LICENSE_NAME=	Academic Free License 1.2
LICENSE_FILE=	${WRKSRC}/LICENSE.AFL
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

USE_APACHE=	22+
AP_FAST_BUILD=	yes
AP_GENPLIST=	yes

PORTDOCS=	reference.html guide.html README

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}
.for f in ${PORTDOCS:NREADME}
	${INSTALL_DATA} ${WRKSRC}/doc/${f} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
