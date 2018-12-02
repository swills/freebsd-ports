# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD: head/net/libproxy-kde/Makefile 486467 2018-12-02 15:41:47Z rene $

PORTREVISION=	0
CATEGORIES=	net devel
PKGNAMESUFFIX=	-${LIBPROXY_SLAVE}

COMMENT=	KDE plug-in for libproxy

DEPRECATED=	KDE4 is end-of-life
EXPIRATION_DATE=2018-12-31

USES=		kde:4
USE_KDE=	runtime

LIBPROXY_SLAVE=	kde
MASTERDIR=	${.CURDIR}/../libproxy

.include "${MASTERDIR}/Makefile"
