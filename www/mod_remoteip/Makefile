# Created by: Jim Riggs <ports@christianserving.org>
# $FreeBSD: head/www/mod_remoteip/Makefile 464189 2018-03-11 17:38:45Z brnrd $

PORTNAME=	mod_remoteip
PORTVERSION=	2.3.5.a
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	APACHE_HTTPD
DISTNAME=	httpd-2.3.5-alpha

MAINTAINER=	ports@christianserving.org
COMMENT=	Replaces the client IP address/hostname with that given by a proxy

USES=		apache:2.2
AP_FAST_BUILD=	yes
AP_GENPLIST=	yes

SRC_FILE=	modules/metadata/${PORTNAME}.c

.include <bsd.port.mk>
