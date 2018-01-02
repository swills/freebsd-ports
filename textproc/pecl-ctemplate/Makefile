# Created by: vanilla
# $FreeBSD: head/textproc/pecl-ctemplate/Makefile 456296 2017-12-14 13:57:28Z tz $

PORTNAME=	cTemplate
PORTVERSION=	1.14
CATEGORIES=	textproc pear
DISTVERSIONPREFIX=	v
PKGNAMEPREFIX=	pecl-
DIST_SUBDIR=	PECL

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	PECL extension for ctemplate library

LIB_DEPENDS=	libctemplate.so:textproc/google-ctemplate

USES=		php:ext localbase:ldflags
USE_GITHUB=	yes
GH_ACCOUNT=	vanillahsu
GH_PROJECT=	pecl-ctemplate
IGNORE_WITH_PHP=	70 71 72

CONFIGURE_ARGS=	--with-cTemplate=${LOCALBASE}

.include <bsd.port.mk>
