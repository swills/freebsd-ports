# Created by: Yukihiro Nakai <Nakai@Mlab.t.u-tokyo.ac.jp>
# $FreeBSD: head/games/xbat/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	xbat
PORTVERSION=	1.11
PORTREVISION=	7
CATEGORIES=	games
MASTER_SITES=	LOCAL/hrs
DISTNAME=	xev111

MAINTAINER=	TsurutaniNaoki@gmail.com
COMMENT=	XEVIOUS like shooting game

LICENSE=	GPLv2

NO_CDROM=	Possible copyright infringement

USES=		imake
USE_XORG=	x11 xext
WRKSRC=		${WRKDIR}/Xev111
ALL_TARGET=	xbat
USE_GCC=	yes # segfaults when compiled with clang

.include <bsd.port.mk>
