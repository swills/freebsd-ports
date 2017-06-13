# Created by: Alexey V. Degtyarev
# $FreeBSD: head/mail/roundcube-groupvice/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	groupvice
PORTVERSION=	0.1.2
CATEGORIES=	mail
MASTER_SITES=	ftp://renatasystems.org/pub/FreeBSD/ports/distfiles/
PKGNAMEPREFIX=	roundcube-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Theme for RoundCube Web Mail

RUN_DEPENDS=	roundcube>=0.2:mail/roundcube

NO_BUILD=	yes
NO_ARCH=	yes

WWWDIR?=	${PREFIX}/www/roundcube/skins/groupvice

SUB_FILES=	pkg-message

do-install:
	${MKDIR} ${STAGEDIR}${WWWDIR}
	cd ${WRKSRC} && ${PAX} -r -w . ${STAGEDIR}${WWWDIR}

.include <bsd.port.mk>
