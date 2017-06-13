# Created by: Tobias Kortkamp <t@tobik.me>
# $FreeBSD: head/java/intellij-fsnotifier/Makefile 437439 2017-04-01 15:23:30Z gerald $

PORTNAME=	intellij-fsnotifier
PORTVERSION=	20160221
PORTREVISION=	2
CATEGORIES=	java devel

MAINTAINER=	tobik@FreeBSD.org
COMMENT=	Replacement for IntelliJ's fsnotifier

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

LIB_DEPENDS=	libinotify.so:devel/libinotify

USE_GITHUB=	yes
GH_ACCOUNT=	idea4bsd
GH_PROJECT=	fsnotifier
GH_TAGNAME=	a04fbff6e21d58fea7a3ed2a6a21e53cbef4b7af

USES=	compiler:c11

.include "${.CURDIR}/../intellij/common.mk"

PLIST_FILES=	${IDEA_HOME}/bin/fsnotifier

do-install:
	${MKDIR} ${STAGEDIR}${IDEA_HOME}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/fsnotifier ${STAGEDIR}${IDEA_HOME}/bin

.include <bsd.port.mk>
