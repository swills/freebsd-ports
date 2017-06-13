# Created by: Jon Nistor <nistor@snickers.org>
# $FreeBSD: head/net/bmon/Makefile 442558 2017-06-04 12:31:59Z joneum $

PORTNAME=	bmon
PORTVERSION=	4.0
DISTVERSIONPREFIX=	v
CATEGORIES=	net

MAINTAINER=	michelle@sorbs.net
COMMENT=	Human-readable bandwidth monitor and rate estimator

LICENSE=	MIT

LIB_DEPENDS=	libconfuse.so:devel/libconfuse

CONFLICTS_INSTALL=	bmon-*

USE_GITHUB=	yes
GH_ACCOUNT=	tgraf

GNU_CONFIGURE=	yes
USES=		autoreconf ncurses pkgconfig:build

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
