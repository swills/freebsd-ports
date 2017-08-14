# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD: head/math/drgeo/Makefile 447829 2017-08-12 13:21:07Z rakuco $

PORTNAME=	drgeo
PORTVERSION=	1.1.0
PORTREVISION=	20
CATEGORIES=	math
MASTER_SITES=	SF/ofset/${PORTNAME}/${PORTVERSION}

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	GTK interactive geometry software

LIB_DEPENDS=	libguile.so:lang/guile

GNU_CONFIGURE=	yes
USES=		gettext gmake pkgconfig pathfix
USE_GNOME=	gnomeprefix intlhack libglade2
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PORTDATA=	*

post-patch:
	@${REINPLACE_CMD} -e 's|#!/bin/bash|#!/bin/sh|g' \
		${WRKSRC}/plugin/drgeo/progs/tm_drgeo

.include <bsd.port.mk>
