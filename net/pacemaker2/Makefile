# Created by: David Shane Holden <dpejesh@yahoo.com>
# $FreeBSD: head/net/pacemaker2/Makefile 470799 2018-05-24 18:24:50Z flo $

PORTVERSION=		2.0.0
DISTVERSIONSUFFIX=	-rc4
PKGNAMESUFFIX=		2

.include "${.CURDIR}/../pacemaker1/Makefile.common"

CONFLICTS+=		pacemaker1-[0-9]*

post-patch: post-patch-common

.include <bsd.port.mk>
