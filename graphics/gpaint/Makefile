# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: head/graphics/gpaint/Makefile 428142 2016-12-08 17:17:43Z tijl $

PORTNAME=	gpaint
PORTVERSION=	0.3.3
DISTVERSIONPREFIX=	2-
PORTREVISION=	6
CATEGORIES=	graphics gnome
MASTER_SITES=	GNU_ALPHA

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Small-scale painting program for GNOME

USES=		libtool pkgconfig
USE_GNOME=	libgnomeprint libgnomeprintui
GNU_CONFIGURE=	yes
LIBS+=		-lm

PLIST_FILES=	bin/gpaint-2 %%DATADIR%%/glade/gpaint.glade

post-patch:
	@${REINPLACE_CMD} -e \
		's|_RESPONSE_DISCARD|_RESPONSE_NO|g' ${WRKSRC}/src/drawing.c

.include <bsd.port.mk>
