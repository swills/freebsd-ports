# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD: head/net/libproxy-webkit/Makefile 473062 2018-06-22 19:59:41Z tcberner $

PORTREVISION=	0
CATEGORIES=	net www
PKGNAMESUFFIX=	-${LIBPROXY_SLAVE}


COMMENT=	WebKit JavaScript plug-in for libproxy

LIB_DEPENDS=	libwebkitgtk-1.0.so:www/webkit-gtk2

LIBPROXY_SLAVE=	webkit
MASTERDIR=	${.CURDIR}/../libproxy

.include "${MASTERDIR}/Makefile"
