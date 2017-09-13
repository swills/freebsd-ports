# Created by: Koop Mast <kwm@FreeBSD.org>
# $FreeBSD: head/accessibility/atkmm/Makefile 449591 2017-09-10 20:55:38Z gerald $

PORTNAME=	atkmm
PORTVERSION=	2.24.2
PORTREVISION=	1
CATEGORIES=	accessibility gnome
MASTER_SITES=	GNOME

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	C++ wrapper for ATK API library

PORTSCOUT=	limitw:1,even

LICENSE=	LGPL20

USES=		compiler:c++11-lang gmake localbase libtool pathfix \
		pkgconfig tar:xz
USE_GNOME=	atk glibmm
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
CONFIGURE_ARGS=	--disable-documentation

.include <bsd.port.mk>
