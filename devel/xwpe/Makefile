# Created by: David O'Brien (obrien@FreeBSD.org)
# $FreeBSD: head/devel/xwpe/Makefile 434587 2017-02-22 15:02:18Z bapt $

PORTNAME=	xwpe
PORTVERSION=	1.5.30a
CATEGORIES=	devel
MASTER_SITES=	SUNSITE/apps/editors/X \
		http://www.identicalsoftware.com/xwpe/ \
		ftp://ftp.identicalsoftware.com/pub/linux/xwpe/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Borland-like IDE programming environment

USES=		desthack ncurses
DESTDIRNAME=	STAGEDIR
USE_XORG=	sm ice x11
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--libdir=\$${STAGEDIR}${PREFIX}/share
ALL_TARGET=	# none

post-patch:
.for file in we_prog.c we_fl_unix.c
	@${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|g ; \
		 s|%%LOCALBASE%%|${LOCALBASE}|g' ${WRKSRC}/${file}
.endfor
	${REINPLACE_CMD} -e 's|$$(INSTALL_PROGRAM)|${INSTALL_PROGRAM}|g' \
	    ${WRKSRC}/Makefile.in
	${REINPLACE_CMD} -e 's|$$(INSTALL_DATA)|${INSTALL_DATA}|g' \
	    ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
