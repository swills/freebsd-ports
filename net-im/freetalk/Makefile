# Created by: Oleg Ginzburg  (olevole@olevole.ru)
# $FreeBSD: head/net-im/freetalk/Makefile 464068 2018-03-10 11:22:59Z cpm $

PORTNAME=	freetalk
PORTVERSION=	4.1
DISTVERSIONPREFIX=	v
PORTREVISION=	3
CATEGORIES=	net-im

MAINTAINER=	ports@FreeBSD.org
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
