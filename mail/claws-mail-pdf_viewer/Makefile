# Created by: Pawel Pekala <c0rn@o2.pl>
# $FreeBSD: head/mail/claws-mail-pdf_viewer/Makefile 448669 2017-08-24 13:45:13Z swills $

PORTNAME=	pdf_viewer
PORTREVISION=	1

COMMENT=	PDF and PostScript viewer plugin for Claws Mail

LIB_DEPENDS=	libpoppler-glib.so:graphics/poppler-glib

USES+=		ghostscript

CLAWS_PLUGINS_BUILD=	pdf_viewer

.include "../claws-mail/Makefile.claws"
.include <bsd.port.mk>
