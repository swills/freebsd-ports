# Created by: Romain Tartiere <romain@FreeBSD.org>
# $FreeBSD: head/devel/gio-sharp/Makefile 413106 2016-04-12 08:55:46Z romain $

PORTNAME=	gio-sharp
PORTVERSION=	2.22.3
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	http://download.mono-project.com/sources/${PORTNAME}/

MAINTAINER=	mono@FreeBSD.org
COMMENT=	GIO bindings not available in gtk-sharp

GNU_CONFIGURE=	yes
CONFIGURE_ENV=	ac_cv_path_CSC=${LOCALBASE}/bin/mcs
USES=		gmake pathfix pkgconfig tar:bzip2
USE_GNOME=	gtksharp20

MAKE_JOBS_UNSAFE=yes

.include <bsd.port.mk>
