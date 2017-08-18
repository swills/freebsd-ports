# Created by: Babak Farrokhi <babak@farrokhi.net>
# $FreeBSD: head/x11-themes/cursor-neutral-theme/Makefile 448082 2017-08-17 08:26:25Z bapt $

PORTNAME=	cursor-neutral-theme
DISTVERSION=	1.13a
PORTREVISION=	3
CATEGORIES=	x11-themes
MASTER_SITES=	http://www.gnome-look.org/CONTENT/content-files/
DISTNAME=	28310-neutral-${DISTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Extended Jaguar X cursor theme

NO_BUILD=	yes

WRKSRC=		${WRKDIR}/neutral

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/icons/neutral/cursors
	${INSTALL_DATA} ${WRKSRC}/cursors/* \
		${STAGEDIR}${PREFIX}/share/icons/neutral/cursors

.include <bsd.port.mk>
