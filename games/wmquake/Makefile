# Created by: Ulrich Spoerlein <uspoerlein@gmail.com>
# $FreeBSD: head/games/wmquake/Makefile 481888 2018-10-12 09:19:04Z antoine $

PORTNAME=	wmquake
PORTVERSION=	1.1
PORTREVISION=	5
CATEGORIES=	games
MASTER_SITES=	http://www.ne.jp/asahi/linux/timecop/software/ \
		LOCAL/uqs

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Id Software's Quake I in a 64x64 WM dockapp window

DEPRECATED=	Uses obsolete glib12
EXPIRATION_DATE=	2018-12-20

USES=		gmake tar:bzip2
USE_GNOME=	gtk12

PLIST_FILES=	bin/wmquake

OPTIONS_DEFINE=	OPTIMIZED_CFLAGS

OPTIMIZED_CFLAGS_CFLAGS=	-O3 -fomit-frame-pointer -funroll-loops -fno-strength-reduce

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/wmquake ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
