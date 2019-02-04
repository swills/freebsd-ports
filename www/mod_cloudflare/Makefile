# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/www/mod_cloudflare/Makefile 491957 2019-02-02 13:40:43Z joneum $

PORTNAME=	mod_cloudflare
PORTVERSION=	2016.10.0
CATEGORIES=	www

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Cloudflare fork of mod_remoteip

LICENSE=	APACHE20

CONFLICTS_INSTALL=	${PKGNAMEPREFIX}mod_remoteip-*

USE_GITHUB=	yes
GH_ACCOUNT=	cloudflare
GH_TAGNAME=	98ab38a

USES=		apache:2.4+
AP_FAST_BUILD=	yes
AP_GENPLIST=	yes
SHORTMODNAME=	cloudflare

SRC_FILE=	mod_cloudflare.c

.include <bsd.port.mk>
