# Created by: David Shane Holden <dpejesh@yahoo.com>
# $FreeBSD: head/net/corosync3/Makefile 470799 2018-05-24 18:24:50Z flo $

PORTVERSION=		2.99.2
PKGNAMESUFFIX=		3

.include "${.CURDIR}/../corosync2/Makefile.common"

LIB_DEPENDS+=		libknet.so:devel/kronosnet

CONFLICTS=		corosync2-[0-9]*

.include <bsd.port.mk>
