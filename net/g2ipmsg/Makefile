# Created by: Norikatsu Shigemura <nork@FreeBSD.org>
# $FreeBSD: head/net/g2ipmsg/Makefile 465584 2018-03-26 12:38:56Z bapt $

PORTNAME=	g2ipmsg
PORTVERSION=	0.9.6
PORTREVISION=	3
CATEGORIES=	net gnome
MASTER_SITES=	http://ipmsg.org/archive/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Popup style message communication tool for GNOME2

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gettext gmake localbase:ldflags pathfix pkgconfig ssl
USE_GNOME=	gnomeprefix intltool libgnomeui
USE_GSTREAMER=	vorbis
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-doxygen-doc \
		--enable-systray \
		--disable-applet \
		--with-ssl=${OPENSSLBASE}

GCONF_SCHEMAS=	g2ipmsg.schemas

.include <bsd.port.mk>
