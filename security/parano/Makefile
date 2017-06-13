# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/security/parano/Makefile 405891 2016-01-12 16:20:31Z amdmi3 $

PORTNAME=	parano
PORTVERSION=	0.3.5
PORTREVISION=	5
CATEGORIES=	security
MASTER_SITES=	BERLIOS

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Gnome program to deal with hashfiles

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USE_GNOME=	pygnome2 intltool
USES=		desktop-file-utils gettext gmake python shared-mime-info
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-update-mime-database

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
