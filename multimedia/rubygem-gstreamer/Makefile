# $FreeBSD: head/multimedia/rubygem-gstreamer/Makefile 467062 2018-04-11 14:49:50Z sunpoet $

PORTNAME=	gstreamer
PORTVERSION=	3.2.4
CATEGORIES=	multimedia rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby/GStreamer is a Ruby binding for GStreamer

LICENSE=	LGPL21+

LIB_DEPENDS=	libgstreamer-1.0.so:multimedia/gstreamer1
RUN_DEPENDS=	rubygem-glib2>=${PORTVERSION}:devel/rubygem-glib2 \
		rubygem-gobject-introspection>=${PORTVERSION}:devel/rubygem-gobject-introspection

USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
