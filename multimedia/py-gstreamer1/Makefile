# Created by: Koop Mast <kwm@rainbow-runner.nl>
# $FreeBSD: head/multimedia/py-gstreamer1/Makefile 483887 2018-11-03 11:58:10Z tijl $

PORTNAME=	gstreamer
PORTVERSION=	1.14.4
CATEGORIES=	multimedia python
MASTER_SITES=	http://gstreamer.freedesktop.org/src/gst-python/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
PKGNAMESUFFIX=	1
DISTNAME=	gst-python-${PORTVERSION}

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	GStreamer python bindings

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

PORTSCOUT=	limitw:1,even

USES=		gmake gnome libtool localbase pathfix pkgconfig python tar:xz
USE_GNOME=	pygobject3
USE_PYTHON=	flavors py3kplist
USE_GSTREAMER1=	yes
GNU_CONFIGURE=	yes
PLIST_SUB=	VERSION="${GST_VERSION}"
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
