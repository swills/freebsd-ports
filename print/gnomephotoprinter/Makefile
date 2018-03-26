# Created by: Alexander Nedotsukov <bland@FreeBSD.org>
# $FreeBSD: head/print/gnomephotoprinter/Makefile 465584 2018-03-26 12:38:56Z bapt $

PORTNAME=	gnomephotoprinter
PORTVERSION=	0.7.0
PORTREVISION=	11
CATEGORIES=	print gnome
MASTER_SITES=	http://www.fogman.de/gpp/
DISTNAME=	gpp-${PORTVERSION}
DIST_SUBDIR=	gnome2

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Gnome Photo Printer is intended for printing photos in an easy way

USE_GNOME=	gnomeprefix intltool libgnomeui libglade2 \
		libgnomeprintui gnomevfs2
USES=		gettext gmake pathfix pkgconfig
GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
