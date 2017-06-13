# Created by: Diane Bruce <db@db.net>
# $FreeBSD: head/comms/cwdaemon/Makefile 412344 2016-04-01 13:29:15Z mat $

PORTNAME=	cwdaemon
PORTVERSION=	0.9.4
CATEGORIES=	comms hamradio
MASTER_SITES=	http://www.chronos.org.uk/download/ \
		LOCAL/db

MAINTAINER=	hamradio@FreeBSD.org
COMMENT=	Amateur Radio cw (Morse code) keyer daemon

LICENSE=	GPLv2

LIB_DEPENDS=	libcw.so:comms/unixcw
CONFIGURE_ARGS+=	--datadir=${PREFIX}/share/doc

GNU_CONFIGURE=	yes
USES=		pkgconfig

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
