# Created by: Pav Lucistnik <pav@FreeBSD.org>
# $FreeBSD: head/net/boinc_curses/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	boinc_curses
PORTVERSION=	0.2.2
PORTREVISION=	1
CATEGORIES=	net
MASTER_SITES=	LOCAL/rene http://www.oook.cz/bsd/boinc_curses/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Console, ncurses based monitor and manager for BOINC

BUILD_DEPENDS=	${LOCALBASE}/lib/libboinc.a:net/boinc-client

USES=		ncurses tar:bzip2
MAKE_ENV=	BOINCLIBDIR=${LOCALBASE}/lib BOINCINCDIR=${LOCALBASE}/include/boinc

PLIST_FILES=	bin/boinc_curses

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/

.include <bsd.port.mk>
