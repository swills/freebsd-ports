# Created by: Dmitry Sivachenko <mitya@yandex-team.ru>
# $FreeBSD: head/math/hfst/Makefile 437439 2017-04-01 15:23:30Z gerald $

PORTNAME=	hfst
PORTVERSION=	3.8.2
PORTREVISION=	2
CATEGORIES=	math
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/source

MAINTAINER=	demon@FreeBSD.org
COMMENT=	A toolkit for for processing natural language morphologies

USES=		libtool pathfix pkgconfig python:2 readline shebangfix
USE_GNOME=	glib20 libxml2
USE_GCC=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-readline --with-unicode-handler=glib --enable-calculate --enable-edit-metadata --enable-lexc-wrapper --enable-proc --enable-tagger --enable-xfst --enable-shuffle --enable-traverse
CPPFLAGS+=	-I${LOCALBASE}/include -I${LOCALBASE}/include/libxml2
LDFLAGS+=	-L${LOCALBASE}/lib
SHEBANG_FILES=	tools/src/hfst-tagger/src/hfst_tagger_compute_data_statistics.py
USE_LDCONFIG=	yes

.include <bsd.port.mk>
