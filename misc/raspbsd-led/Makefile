# $FreeBSD: head/misc/raspbsd-led/Makefile 421072 2016-08-29 15:41:40Z brd $

PORTNAME=	raspbsd-led
PORTVERSION=	0.2
PORTREVISION=	1
DISTVERSIONPREFIX=	v
CATEGORIES=	misc

MAINTAINER=	brd@FreeBSD.org
COMMENT=	Misc LED programs for ARM boards

USE_GITHUB=	yes
GH_ACCOUNT=	raspbsd
ONLY_FOR_ARCHS=	armv6
USE_RC_SUBR=	flash-heartbeat-led
PLIST_FILES=	sbin/flash-heartbeat-led

.include <bsd.port.mk>
