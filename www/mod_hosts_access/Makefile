# Created by: will
# $FreeBSD: head/www/mod_hosts_access/Makefile 464189 2018-03-11 17:38:45Z brnrd $

PORTNAME=	mod_hosts_access
PORTVERSION=	1.1.0
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	LOCAL/pgollucci

MAINTAINER=	apache@FreeBSD.org
COMMENT=	Apache module that makes Apache respect hosts.allow and hosts.deny

LICENSE=	APACHE20

USES=		apache:2.2
AP_FAST_BUILD=	yes
AP_GENPLIST=	yes

AP_LIB+=	${LOCALBASE}/lib -lwrap

.include <bsd.port.mk>
