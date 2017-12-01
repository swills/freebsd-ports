# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD: head/math/drgeo/Makefile 455212 2017-11-30 17:06:14Z amdmi3 $

PORTNAME=	drgeo
PORTVERSION=	1.1.0
PORTREVISION=	20
CATEGORIES=	math
MASTER_SITES=	SF/ofset/${PORTNAME}/${PORTVERSION}

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	GTK interactive geometry software

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libguile.so:lang/guile

GNU_CONFIGURE=	yes
USES=		gettext gmake localbase:ldflags pkgconfig pathfix
USE_GNOME=	gnomeprefix intlhack libglade2

PORTDATA=	*

post-patch:
	@${REINPLACE_CMD} -e 's|#!/bin/bash|#!/bin/sh|g' \
		${WRKSRC}/plugin/drgeo/progs/tm_drgeo

.include <bsd.port.mk>
