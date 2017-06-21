# Created by: Lukasz Wasikowski <lukasz@wasikowski.net>
# $FreeBSD: head/sysutils/modman/Makefile 443510 2017-06-13 16:29:40Z ultima $

PORTNAME=	modman
PORTVERSION=	1.12
CATEGORIES=	sysutils www

MAINTAINER=	lukasz@wasikowski.net
COMMENT=	Modularize extensions using symlinks

LICENSE=	APACHE20

RUN_DEPENDS=	bash:shells/bash

USE_GITHUB=	yes
GH_ACCOUNT=	colinmollenhour
NO_BUILD=	yes

PLIST_FILES=	sbin/modman

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} \
		${STAGEDIR}${PREFIX}/sbin/${PORTNAME}

.include <bsd.port.mk>
