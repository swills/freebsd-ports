# Created by: Lars Engels <lars.engels@0x20.net>
# $FreeBSD: head/audio/osdmixer/Makefile 412344 2016-04-01 13:29:15Z mat $

PORTNAME=	osdmixer
PORTVERSION=	0.9
PORTREVISION=	7
CATEGORIES=	audio
MASTER_SITES=	http://bsd-geek.de/FreeBSD/distfiles/

MAINTAINER=	lme@FreeBSD.org
COMMENT=	Displays audio volume with an OSD

LIB_DEPENDS=	libxosd.so:misc/xosd

PLIST_FILES=	bin/osdmixer

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/osdmixer ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
