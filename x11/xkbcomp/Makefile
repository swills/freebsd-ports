# $FreeBSD: head/x11/xkbcomp/Makefile 440690 2017-05-12 17:04:06Z rezny $

PORTNAME=	xkbcomp
PORTVERSION=	1.4.0
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Compile XKB keyboard description

LICENSE=	MIT

XORG_CAT=	app
USE_XORG=	x11 xkbfile
USES=		pathfix

PLIST_FILES=	bin/xkbcomp \
		libdata/pkgconfig/xkbcomp.pc \
		man/man1/xkbcomp.1.gz

.include <bsd.port.mk>
