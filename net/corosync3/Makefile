# Created by: David Shane Holden <dpejesh@yahoo.com>
# $FreeBSD: head/net/corosync3/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTVERSION=		2.99.2
PORTREVISION=	1
PKGNAMESUFFIX=		3

.include "${.CURDIR}/../corosync2/Makefile.common"

LIB_DEPENDS+=		libknet.so:devel/kronosnet

CONFLICTS=		corosync2-[0-9]*

.include <bsd.port.mk>
