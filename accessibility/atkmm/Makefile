# Created by: Koop Mast <kwm@FreeBSD.org>
# $FreeBSD: head/accessibility/atkmm/Makefile 475857 2018-07-29 22:18:44Z gerald $

PORTNAME=	atkmm
PORTVERSION=	2.24.2
PORTREVISION=	2
CATEGORIES=	accessibility gnome
MASTER_SITES=	GNOME

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	C++ wrapper for ATK API library

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/COPYING

PORTSCOUT=	limitw:1,even

USES=		compiler:c++11-lang gmake localbase libtool pathfix \
		pkgconfig tar:xz
USE_GNOME=	atk glibmm
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
CONFIGURE_ARGS=	--disable-documentation

.include <bsd.port.mk>
