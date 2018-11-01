# Created by: Jim Riggs <ports@christianserving.org>
# $FreeBSD: head/devel/libestr/Makefile 483557 2018-10-31 07:50:16Z matthew $

PORTNAME=	libestr
PORTVERSION=	0.1.11
CATEGORIES=	devel
MASTER_SITES=	http://libestr.adiscon.com/files/download/

MAINTAINER=	matthew@FreeBSD.org
COMMENT=	Library for some string essentials

USES=		libtool pathfix
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--prefix="${PREFIX}" \
		--disable-testbench

.include <bsd.port.mk>
