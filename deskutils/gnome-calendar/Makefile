# Created by: Koop Mast <kwm@FreeBSD.org>
# $FreeBSD: head/deskutils/gnome-calendar/Makefile 441071 2017-05-17 09:45:20Z kwm $

PORTNAME=	gnome-calendar
PORTVERSION=	3.18.2.1
PORTREVISION=	2
CATEGORIES=	deskutils gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome3

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Simple and beatiful calendar application for GNOME

PORTSCOUT=	limitw:1,even

LIB_DEPENDS=	libical.so:devel/libical

USES=		gettext gmake gnome libtool pathfix pkgconfig tar:xz
USE_LDCONFIG=	yes
INSTALLS_ICONS=	yes
USE_GNOME=	evolutiondataserver3 gtk30 intlhack \
		introspection
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

GLIB_SCHEMAS=	org.gnome.calendar.enums.xml \
		org.gnome.calendar.gschema.xml

# for gcc 4.2.1
post-patch:
	@${REINPLACE_CMD} -e 's|-Wempty-body||g' \
		${WRKSRC}/configure

.include <bsd.port.mk>
