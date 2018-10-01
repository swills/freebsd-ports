# Created by: Koop Mast <kwm@FreeBSD.org>
# $FreeBSD: head/x11-fonts/cantarell-fonts/Makefile 480951 2018-09-30 11:58:29Z kwm $

PORTNAME=	cantarell-fonts
PORTVERSION=	0.101
CATEGORIES=	x11-fonts gnome
MASTER_SITES=	GNOME

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Cantarell, a Humanist sans-serif font family

LICENSE=	OFL11
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	appstream-util:devel/appstream-glib
LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig

USES=		gettext-tools fonts meson tar:xz
FONTSDIR=	share/fonts/cantarell
NO_ARCH=	yes

.include <bsd.port.mk>
