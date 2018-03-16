# Created by: gpalmer
# $FreeBSD: head/x11-clocks/xdaliclock/Makefile 464165 2018-03-11 11:21:23Z rene $

PORTNAME=	xdaliclock
PORTVERSION=	2.43
CATEGORIES=	x11-clocks
MASTER_SITES=	http://www.jwz.org/xdaliclock/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Rather neat animated clock

WRKSRC=		${WRKDIR}/${DISTNAME}/X11

GNU_CONFIGURE=	yes
USE_XORG=	xt sm ice xext x11
PLIST_FILES=	bin/xdaliclock man/man1/${PORTNAME}.1.gz

.include <bsd.port.mk>
