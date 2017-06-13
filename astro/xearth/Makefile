# Created by: Piero Serini <piero@FreeBSD.org>
# $FreeBSD: head/astro/xearth/Makefile 431147 2017-01-11 00:28:13Z ler $

PORTNAME=	xearth
PORTVERSION=	1.2
CATEGORIES=	astro geography
MASTER_SITES=	LOCAL/madpilot/xearth

MAINTAINER=	ler@FreeBSD.org
COMMENT=	Set the root window to the image of earth

USE_XORG=	x11 xext sm ice xt
USES=		tar:xz
PLIST_FILES=	bin/xearth \
		man/man1/xearth.1.gz \
		lib/X11/xearth/freebsd.committers.markers \
		lib/X11/xearth/freebsd.ftp.markers
PLIST_DIRS=	lib/X11/xearth

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/xearth ${STAGEDIR}${PREFIX}/bin
	@${INSTALL_MAN} ${WRKSRC}/xearth.man ${STAGEDIR}${MANPREFIX}/man/man1/xearth.1
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/X11/xearth
# Copy the list of FreeBSD sites & committers locations
.for marker in freebsd.committers.markers freebsd.ftp.markers
	@${INSTALL_DATA} ${FILESDIR}/${marker} ${STAGEDIR}${PREFIX}/lib/X11/xearth
.endfor

.include <bsd.port.mk>
