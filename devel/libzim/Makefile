# $FreeBSD: head/devel/libzim/Makefile 483889 2018-11-03 12:17:58Z gerald $

PORTNAME=	libzim
PORTVERSION=	4.0.0
PORTREVISION=	2
CATEGORIES=	devel

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Reference implementation of the ZIM specification

LIB_DEPENDS=	libicui18n.so:devel/icu \
		libxapian.so:databases/xapian-core

USES=		compiler:c++11-lang meson pkgconfig python:3.4+
USE_LDCONFIG=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	openzim

BINARY_ALIAS=	python3=python${PYTHON_VER} python3-config=python${PYTHON_VER}-config

.include <bsd.port.mk>
