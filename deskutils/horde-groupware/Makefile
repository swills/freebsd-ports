# $FreeBSD: head/deskutils/horde-groupware/Makefile 440070 2017-05-03 23:29:17Z mm $

PORTNAME=	groupware
PORTVERSION=	5.2.20
CATEGORIES=	deskutils www pear
PKGNAMEPREFIX=	horde-

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Groupware

CONFLICTS=	horde-webmail-[456]*

USES=	horde cpe
USE_HORDE_BUILD=	Horde_Role
USE_HORDE_RUN=	Horde_Role \
		content \
		gollem \
		horde \
		kronolith \
		mnemo \
		nag \
		timeobjects \
		trean \
		turba

.include <bsd.port.mk>
