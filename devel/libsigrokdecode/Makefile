# Created by: Uffe Jakobsen <uffe@uffe.org>
# $FreeBSD: head/devel/libsigrokdecode/Makefile 434587 2017-02-22 15:02:18Z bapt $

PORTNAME=	libsigrokdecode
PORTVERSION=	0.3.0
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	http://sigrok.org/download/source/libsigrokdecode/

MAINTAINER=	bsam@FreeBSD.org
COMMENT=	Framework for hardware logic analyzers, protocol decoders library

LICENSE=	GPLv3

GNU_CONFIGURE=	yes
USE_GNOME=	glib20
USES=		libtool pathfix pkgconfig python:3
MAKE_JOBS_UNSAFE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
