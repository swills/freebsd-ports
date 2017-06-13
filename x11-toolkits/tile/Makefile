# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/x11-toolkits/tile/Makefile 413747 2016-04-21 16:48:50Z gahr $

PORTNAME=	tile
PORTVERSION=	0.8.4.0
CATEGORIES=	x11-toolkits tk
MASTER_SITES=	SF/tktable/${PORTNAME}/${PORTNAME}-0-8-4-0

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Themed widget set for Tk

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/license.terms

USES=		autoreconf tk:tea

CONFIGURE_ENV+=	TCL_INCLUDEDIR="${TCL_INCLUDEDIR}" \
		TK_INCLUDEDIR="${TK_INCLUDEDIR}"

pre-configure:
	@${REINPLACE_CMD} -e "s/package require Tcl 8\../package require Tcl ${TCL_VER}/g" \
		${WRKSRC}/Makefile.in

.include <bsd.port.mk>
