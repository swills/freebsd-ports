# Created by: Stanislav Sedov <stas@FreeBSD.org>
# $FreeBSD: head/devel/libatomic_ops/Makefile 443387 2017-06-11 13:26:46Z rodrigo $

PORTNAME=	libatomic_ops
PORTVERSION=	7.4.6
DISTVERSIONPREFIX=	v
CATEGORIES=	devel

MAINTAINER=	rodrigo@FreeBSD.org
COMMENT=	Atomic operations access library

LICENSE=	BSD2CLAUSE GPLv2
LICENSE_COMB=	multi

LIB_DEPENDS=	libltdl.so:devel/libltdl

USES=autoreconf libtool pathfix
GNU_CONFIGURE=yes
USE_GITHUB=	yes
GH_ACCOUNT=	ivmai
GH_PROJECT=	libatomic_ops

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
