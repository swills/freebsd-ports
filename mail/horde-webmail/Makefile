# $FreeBSD: head/mail/horde-webmail/Makefile 471751 2018-06-05 09:34:24Z amdmi3 $

PORTNAME=	webmail
PORTVERSION=	5.2.22
CATEGORIES=	mail www pear
PKGNAMEPREFIX=	${PHP_PKGNAMEPREFIX}horde-

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Groupware Webmail Edition

CONFLICTS=	horde-groupware-[456]*

USES=		horde cpe
CPE_PRODUCT=	groupware
CPE_EDITION=	webmail
USE_HORDE_BUILD=	Horde_Role
USE_HORDE_RUN=	Horde_Role \
		content \
		gollem \
		horde \
		imp \
		ingo \
		kronolith \
		mnemo \
		nag \
		timeobjects \
		trean \
		turba

.include <bsd.port.mk>
