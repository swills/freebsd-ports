# $FreeBSD: head/x11-toolkits/tepl/Makefile 480965 2018-09-30 17:17:55Z kwm $

PORTNAME=	tepl
PORTVERSION=	4.0.0
CATEGORIES=	x11-toolkits
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Text editor product line

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libuchardet.so:textproc/uchardet

USES=		gettext gmake gnome libtool pkgconfig tar:xz
USE_GNOME=	cairo gdkpixbuf2 gtksourceview4 libxml2
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
