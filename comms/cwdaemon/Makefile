# Created by: Diane Bruce <db@db.net>
# $FreeBSD: head/comms/cwdaemon/Makefile 452001 2017-10-13 14:19:26Z bapt $

PORTNAME=	cwdaemon
PORTVERSION=	0.9.4
CATEGORIES=	comms hamradio
MASTER_SITES=	LOCAL/db

MAINTAINER=	hamradio@FreeBSD.org
COMMENT=	Amateur Radio cw (Morse code) keyer daemon

LICENSE=	GPLv2

LIB_DEPENDS=	libcw.so:comms/unixcw
CONFIGURE_ARGS+=	--datadir=${PREFIX}/share/doc

GNU_CONFIGURE=	yes
USES=		pkgconfig

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
