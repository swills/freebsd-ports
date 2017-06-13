# Created by: Edward Tomasz Napierala <trasz@FreeBSD.org>
# $FreeBSD: head/audio/celt/Makefile 428129 2016-12-08 15:38:24Z tijl $

PORTNAME=	celt
PORTVERSION=	0.11.3
PORTREVISION=	3
CATEGORIES=	audio
MASTER_SITES=	http://downloads.us.xiph.org/releases/celt/

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	The CELT ultra-low delay audio codec

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libogg.so:audio/libogg

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-ogg=${LOCALBASE}
USE_LDCONFIG=	yes
USES=		gmake libtool:keepla pathfix
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
