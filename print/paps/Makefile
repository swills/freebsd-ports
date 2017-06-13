# Created by: johans
# $FreeBSD: head/print/paps/Makefile 428152 2016-12-08 19:52:19Z tijl $

PORTNAME=	paps
PORTVERSION=	0.6.8
PORTREVISION=	4
CATEGORIES=	print
MASTER_SITES=	SF

MAINTAINER=	johans@FreeBSD.org
COMMENT=	UTF-8 to PostScript converter using Pango

PLIST_FILES=	bin/paps lib/libpaps.a include/libpaps.h \
		man/man1/paps.1.gz

GNU_CONFIGURE=	yes
USE_GNOME=	pango
USES=		pkgconfig

.include <bsd.port.mk>
