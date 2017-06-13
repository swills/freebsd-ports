# Created by: desmo@bandwidth.org
# $FreeBSD: head/x11-clocks/xalarm/Makefile 416469 2016-06-06 15:25:42Z mat $

PORTNAME=	xalarm
PORTVERSION=	3.06
CATEGORIES=	x11-clocks
MASTER_SITES=	XCONTRIB/utilities

MAINTAINER=	cy@FreeBSD.org
COMMENT=	X based alarm clock

USES=		imake
USE_XORG=	ice sm x11 xaw xext xmu xpm xt

pre-install:
	(cd ${WRKSRC} ; ${CP} XAlarm.ad XAlarm-color.ad)

.include <bsd.port.mk>
