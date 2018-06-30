# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD: head/net/libproxy-webkit3/Makefile 473062 2018-06-22 19:59:41Z tcberner $

PORTREVISION=	0
CATEGORIES=	net www
PKGNAMESUFFIX=	-${LIBPROXY_SLAVE}

COMMENT=	WebKit JavaScript plug-in for libproxy

LIB_DEPENDS=	libjavascriptcoregtk-4.0.so:www/webkit2-gtk3

USES=		gettext-runtime
USE_GNOME=	glib20

LIBPROXY_SLAVE=	webkit3
MASTERDIR=	${.CURDIR}/../libproxy

.include "${MASTERDIR}/Makefile"
