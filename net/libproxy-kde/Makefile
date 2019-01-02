# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD: head/net/libproxy-kde/Makefile 488396 2018-12-26 15:09:13Z kwm $

PORTREVISION=	1
CATEGORIES=	net devel
PKGNAMESUFFIX=	-${LIBPROXY_SLAVE}

COMMENT=	KDE plug-in for libproxy

USES=		kde:5
USE_KDE=	config

LIBPROXY_SLAVE=	kde
MASTERDIR=	${.CURDIR}/../libproxy

.include "${MASTERDIR}/Makefile"
