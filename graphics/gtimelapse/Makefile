# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD: head/graphics/gtimelapse/Makefile 458949 2018-01-14 01:23:15Z woodsb02 $

PORTNAME=	gtimelapse
DISTVERSION=	0.1
PORTREVISION=	11
CATEGORIES=	graphics
MASTER_SITES=	SF/${PORTNAME}/Relase	# yes, this is not a typo (here)

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Application for capturing images to generate timelapse videos

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libgphoto2.so:graphics/libgphoto2

WRKSRC=		${WRKDIR}/${PORTNAME}

GNU_CONFIGURE=	yes
USES=		autoreconf compiler:c++11-lib libtool pkgconfig
USE_WX=		3.0
USE_CXXSTD=	c++11
WX_CONF_ARGS=	absolute

PLIST_FILES=	bin/${PORTNAME}

DESKTOP_ENTRIES="gTimelapse" "" "" "${PORTNAME}" "Graphics;GTK;" ""

.include <bsd.port.mk>
