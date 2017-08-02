# Created by: stas
# $FreeBSD: head/devel/libinotify/Makefile 447073 2017-08-01 19:18:13Z sunpoet $

PORTNAME=	libinotify
PORTVERSION=	20170711
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Kevent based inotify compatible library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes
USES=		autoreconf libtool

GH_ACCOUNT=	${PORTNAME}-kqueue
GH_PROJECT=	${PORTNAME}-kqueue
USE_GITHUB=	yes

.include <bsd.port.mk>
