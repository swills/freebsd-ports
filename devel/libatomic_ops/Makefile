# Created by: Stanislav Sedov <stas@FreeBSD.org>
# $FreeBSD: head/devel/libatomic_ops/Makefile 494528 2019-03-03 22:32:53Z rodrigo $

PORTNAME=	libatomic_ops
PORTVERSION=	7.6.10
DISTVERSIONPREFIX=	v
CATEGORIES=	devel

MAINTAINER=	rodrigo@FreeBSD.org
COMMENT=	Atomic operations access library

LICENSE=	BSD2CLAUSE GPLv2
LICENSE_COMB=	multi
LICENSE_FILE_GPLv2=	${WRKSRC}/COPYING

LIB_DEPENDS=	libltdl.so:devel/libltdl

USES=		autoreconf libtool pathfix
GNU_CONFIGURE=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	ivmai

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
