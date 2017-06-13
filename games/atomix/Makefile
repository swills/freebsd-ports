# Created by: Yukihiro Nakai <nakai@FreeBSD.org>
# $FreeBSD: head/games/atomix/Makefile 441065 2017-05-17 08:44:31Z kwm $

PORTNAME=	atomix
PORTVERSION=	3.22.0
CATEGORIES=	games gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome3

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Yet another little mind game

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	appstream-util:devel/appstream-glib

PORTSCOUT=	limitw:1,even

USES=		gettext gmake gnome localbase pathfix pkgconfig tar:xz
USE_GNOME=	cairo gdkpixbuf2 gtk30 intlhack
GNU_CONFIGURE=	yes

.include <bsd.port.mk>
