# Created by: Juraj Lutter <otis@sk.freebsd.org>
# $FreeBSD: head/devel/libconfuse/Makefile 472380 2018-06-14 14:07:32Z mat $

PORTNAME=	libconfuse
DISTVERSIONPREFIX=	v
DISTVERSION=	3.2.1
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	otis@freebsd.sk
COMMENT=	Configuration file parsing library

LICENSE=	ISCL

USES=		autoreconf gettext-tools iconv pathfix pkgconfig libtool
USE_LDCONFIG=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	martinh

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-nls --enable-shared
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
