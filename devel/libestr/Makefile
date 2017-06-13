# Created by: Jim Riggs <ports@christianserving.org>
# $FreeBSD: head/devel/libestr/Makefile 424427 2016-10-21 15:21:13Z mat $

PORTNAME=	libestr
PORTVERSION=	0.1.10
PORTREVISION=	1
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
