# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/www/mod_cloudflare/Makefile 416974 2016-06-16 15:48:45Z feld $

PORTNAME=	mod_cloudflare
PORTVERSION=	0.0.2016.6.0
CATEGORIES=	www

MAINTAINER=	feld@FreeBSD.org
COMMENT=	Cloudflare fork of mod_remoteip

LICENSE=	APACHE20

CONFLICTS_INSTALL=	${PKGNAMEPREFIX}mod_remoteip-*

USE_GITHUB=	yes
GH_ACCOUNT=	cloudflare
GH_TAGNAME=	340fa0a

USE_APACHE=	22+
AP_FAST_BUILD=	yes
AP_GENPLIST=	yes
SHORTMODNAME=	cloudflare

SRC_FILE=	mod_cloudflare.c

.include <bsd.port.mk>
