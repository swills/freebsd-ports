# Created by: stas
# $FreeBSD: head/devel/libinotify/Makefile 414761 2016-05-07 07:31:58Z delphij $

PORTNAME=	libinotify
PORTVERSION=	20160505
CATEGORIES=	devel

MAINTAINER=	delphij@FreeBSD.org
COMMENT=	Kevent based inotify compatible library

LICENSE=	MIT

USE_GITHUB=	yes
GH_ACCOUNT=	libinotify-kqueue
GH_PROJECT=	libinotify-kqueue
GH_TAGNAME=	417e789

USES=		autoreconf libtool
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
