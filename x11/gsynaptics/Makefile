# Created by: Norikatsu Shigemura <nork@FreeBSD.org>
# $FreeBSD: head/x11/gsynaptics/Makefile 465484 2018-03-24 21:12:13Z sunpoet $

PORTNAME=	gsynaptics
PORTVERSION=	0.9.16
PORTREVISION=	2
CATEGORIES=	x11
MASTER_SITES=	OSDN/${PORTNAME}/38463

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GNOME Synaptics Touchpad setting tool

LICENSE=	GPLv2

RUN_DEPENDS=	xf86-input-synaptics>0:x11-drivers/xf86-input-synaptics

USES=		gettext gmake pathfix pkgconfig
USE_GNOME=	gconf2 libglade2 gnomedocutils intltool
GNU_CONFIGURE=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
