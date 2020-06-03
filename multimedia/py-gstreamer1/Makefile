# Created by: Koop Mast <kwm@rainbow-runner.nl>
# $FreeBSD$

PORTNAME=	gstreamer
PORTVERSION=	1.16.1
CATEGORIES=	multimedia python
MASTER_SITES=	http://gstreamer.freedesktop.org/src/gst-python/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
PKGNAMESUFFIX=	1
DISTNAME=	gst-python-${PORTVERSION}

PATCH_SITES=	https://gitlab.freedesktop.org/${PORTNAME}/gst-python/commit/
PATCHFILES+=	22f28155.diff:-p1 # https://gitlab.freedesktop.org/gstreamer/gst-python/merge_requests/30

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	GStreamer python bindings

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

PORTSCOUT=	limitw:1,even

USES=		gnome meson pkgconfig python tar:xz
USE_GNOME=	pygobject3
USE_PYTHON=	flavors py3kplist
USE_GSTREAMER1=	yes
PLIST_SUB=	VERSION="${GST_VERSION}"
BINARY_ALIAS=	python3=${PYTHON_VERSION}

.include <bsd.port.mk>
