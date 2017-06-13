# Created by: Edward Tomasz Napierala <trasz@FreeBSD.org>
# $FreeBSD: head/audio/jack-smf-utils/Makefile 428152 2016-12-08 19:52:19Z tijl $

PORTNAME=	jack-smf-utils
PORTVERSION=	1.0
PORTREVISION=	8
CATEGORIES=	audio
MASTER_SITES=	SF

MAINTAINER=	trasz@FreeBSD.org
COMMENT=	Standard MIDI File file player and recorder for JACK MIDI

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libjack.so:audio/jack \
		liblash.so:audio/lash

USES=		pkgconfig
GNU_CONFIGURE=	yes
USE_GNOME=	glib20

.include <bsd.port.mk>
