# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/audio/lvtk/Makefile 462887 2018-02-25 00:40:37Z yuri $

PORTNAME=	lvtk
PORTVERSION=	1.2.0
CATEGORIES=	audio

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Wraps the LV2 C API and extensions into easy to use C++ classes

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	lv2>0:audio/lv2 \
		${LOCALBASE}/include/gtkmm-2.4/gtkmm.h:x11-toolkits/gtkmm24

USES=		waf pkgconfig
USE_GITHUB=	yes
GH_TAGNAME=	7c0ffdf

.include <bsd.port.mk>
