# $FreeBSD: head/devel/libzim/Makefile 473551 2018-06-29 14:22:11Z jbeich $

PORTNAME=	libzim
PORTVERSION=	2.0.0
PORTREVISION=	2
CATEGORIES=	devel

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Reference implementation of the ZIM specification

LIB_DEPENDS=	libicui18n.so:devel/icu \
		libxapian.so:databases/xapian-core

USES=		meson pkgconfig
USE_LDCONFIG=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	openzim

.include <bsd.port.mk>
