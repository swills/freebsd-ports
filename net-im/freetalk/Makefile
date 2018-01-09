# Created by: Oleg Ginzburg  (olevole@olevole.ru)
# $FreeBSD: head/net-im/freetalk/Makefile 458427 2018-01-08 15:20:57Z cpm $

PORTNAME=	freetalk
PORTVERSION=	4.1
DISTVERSIONPREFIX=	v
PORTREVISION=	2
CATEGORIES=	net-im

MAINTAINER=	olevole@olevole.ru
COMMENT=	GNU console based Jabber client

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libloudmouth-1.so:net-im/loudmouth \
		libguile-2.0.so:lang/guile2 \
		libgc-threaded.so:devel/boehm-gc-threaded

USES=		autoreconf gettext-runtime localbase makeinfo pkgconfig readline
USE_GNOME=	glib20
GNU_CONFIGURE=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	GNUFreetalk

INFO=		freetalk

.include <bsd.port.mk>
