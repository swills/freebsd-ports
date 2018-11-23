# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/www/mod_cloudflare/Makefile 485225 2018-11-18 14:14:15Z joneum $

PORTNAME=	mod_cloudflare
PORTVERSION=	0.0.2016.6.0
CATEGORIES=	www

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Cloudflare fork of mod_remoteip

LICENSE=	APACHE20

CONFLICTS_INSTALL=	${PKGNAMEPREFIX}mod_remoteip-*

USE_GITHUB=	yes
GH_ACCOUNT=	cloudflare
GH_TAGNAME=	340fa0a

USES=		apache:2.2+
AP_FAST_BUILD=	yes
AP_GENPLIST=	yes
SHORTMODNAME=	cloudflare

SRC_FILE=	mod_cloudflare.c

.include <bsd.port.mk>
