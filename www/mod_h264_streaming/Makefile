# Created by: Li-Wen Hsu <lwhsu@FreeBSD.org>
# $FreeBSD: head/www/mod_h264_streaming/Makefile 428143 2016-12-08 17:26:09Z tijl $

PORTNAME=	mod_h264_streaming
PORTVERSION=	2.2.7
PORTREVISION=	2
CATEGORIES=	www
MASTER_SITES=	http://h264.code-shop.com/download/
PKGNAMEPREFIX=	${APACHE_PKGNAMEPREFIX}
DISTNAME=	apache_${PORTNAME}-${PORTVERSION}
DIST_SUBDIR=	apache2

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Apache H264 streaming module

USE_APACHE=	22+

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=	--with-apxs="${APXS}"

RESTRICTED=	No commercial use

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
PLIST_SUB=	SED=${SED}

.include <bsd.port.mk>
