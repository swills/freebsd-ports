# Created by: Choe, Cheng-Dae
# $FreeBSD: head/www/mod_webkit/Makefile 430490 2017-01-03 18:12:13Z mat $

PORTNAME=	mod_webkit
PORTVERSION=	1.2.1
CATEGORIES=	www

MAINTAINER=	apache@FreeBSD.org
COMMENT=	Apache module for WebWare WebKit AppServer

LICENSE=	PSFL

USE_GITHUB=	yes
GH_ACCOUNT=	Cito
GH_PROJECT=	w4py

USE_APACHE=	22+
AP_FAST_BUILD=	yes
AP_GENPLIST=	yes
AP_EXTRAS=	marshal.c

WRKSRC_SUBDIR=		WebKit/Adapters/${PORTNAME}2

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/sbin/apxs|${APXS}|' ${WRKSRC}/Makefile

.include <bsd.port.mk>
