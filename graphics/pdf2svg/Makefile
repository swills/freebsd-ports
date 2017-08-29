# Created by: Martin Dieringer <martin.dieringe@gmx.de>
# $FreeBSD: head/graphics/pdf2svg/Makefile 448669 2017-08-24 13:45:13Z swills $

PORTNAME=	pdf2svg
PORTVERSION=	0.2.3
PORTREVISION=	5
DISTVERSIONPREFIX=	v
CATEGORIES=	graphics

MAINTAINER=	martin.dieringer@gmx.de
COMMENT=	Convert PDF to SVG

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libpoppler-glib.so:graphics/poppler-glib

USE_GITHUB=	yes
GH_ACCOUNT=	db9052

USES=		pkgconfig
USE_GNOME=	cairo
GNU_CONFIGURE=	yes

PLIST_FILES=	bin/pdf2svg

.include <bsd.port.mk>
