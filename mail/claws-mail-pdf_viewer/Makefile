# Created by: Pawel Pekala <c0rn@o2.pl>
# $FreeBSD: head/mail/claws-mail-pdf_viewer/Makefile 438695 2017-04-17 14:07:47Z pawel $

PORTNAME=	pdf_viewer
PORTREVISION=	0

COMMENT=	PDF and PostScript viewer plugin for Claws Mail

LIB_DEPENDS=	libpoppler-glib.so:graphics/poppler-glib

USES+=		ghostscript

CLAWS_PLUGINS_BUILD=	pdf_viewer

.include "../claws-mail/Makefile.claws"
.include <bsd.port.mk>
