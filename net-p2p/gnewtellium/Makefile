# Created by: haikal
# $FreeBSD: head/net-p2p/gnewtellium/Makefile 481888 2018-10-12 09:19:04Z antoine $

PORTNAME=	gnewtellium
PORTVERSION=	0.05b
PORTREVISION=	6
CATEGORIES=	net-p2p
MASTER_SITES=	SF

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Gnutella client

DEPRECATED=	Uses obsolete glib12
EXPIRATION_DATE=	2018-12-20

PORTSCOUT=	skipv:0.05	# older than current one

USE_GNOME=	gtk12
USES=		dos2unix gmake
DOS2UNIX_GLOB=	*.c
GNU_CONFIGURE=	yes
MAKE_ARGS=	ACLOCAL="${TRUE}" AUTOCONF="${TRUE}" AUTOMAKE="${TRUE}" \
		AUTOHEADER="${TRUE}"

PLIST_FILES=	bin/gnewtellium %%DATADIR%%/pixmaps/gnewtellium.xpm

.include <bsd.port.mk>
