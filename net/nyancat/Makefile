# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/net/nyancat/Makefile 479375 2018-09-10 08:58:46Z ehaupt $

PORTNAME=	nyancat
PORTVERSION=	1.5.2
PORTEPOCH=	1
CATEGORIES=	net games

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Animated telnet server that renders a loop of the nyan cat animation

LICENSE=	NCSA

USE_GITHUB=	yes
GH_ACCOUNT=	klange

SUB_FILES=	pkg-message
PLIST_FILES=	bin/nyancat

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
