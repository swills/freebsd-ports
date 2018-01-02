# Created by: Max Baryshnikov <mephius@gmail.com>
# $FreeBSD: head/www/pecl-sphinx/Makefile 456296 2017-12-14 13:57:28Z tz $

PORTNAME=	sphinx
DISTVERSION=	1.3.3
PORTREVISION=	1
CATEGORIES=	www

MAINTAINER=	mephius@gmail.com
COMMENT=	Sphinx search engine php client

LICENSE=	PHP301

IGNORE_WITH_PHP=	70 71 72

LIB_DEPENDS=	libsphinxclient.so:textproc/libsphinxclient

USES=		php:pecl

SUB_FILES=	pkg-message
PKGMESSAGE=	${WRKDIR}/pkg-message

CFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
