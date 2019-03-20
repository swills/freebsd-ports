# Created by: Jim Riggs <ports@christianserving.org>
# $FreeBSD: head/www/mod_setenvifplus/Makefile 495781 2019-03-15 09:40:47Z joneum $

PORTNAME=	mod_setenvifplus
PORTVERSION=	0.38
CATEGORIES=	www
MASTER_SITES=	SF/modsetenvifplus
EXTRACT_SUFX=	-src.tar.gz
DIST_SUBDIR=	apache2

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Allows setting environment variables based on request attributes

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/doc/LICENSE.txt

USES=		apache:2.4
AP_FAST_BUILD=	yes
AP_GENPLIST=	yes
SRC_FILE=	${WRKSRC}/apache2/${MODULENAME}.c

.include <bsd.port.mk>
