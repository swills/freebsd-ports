# Created by: Adriaan de Groot <groot@kde.org>
# $FreeBSD: head/palm/libmal/Makefile 450515 2017-09-24 18:49:51Z sunpoet $

PORTNAME=	libmal
PORTVERSION=	0.44.1
PORTREVISION=	2
CATEGORIES=	palm
MASTER_SITES=	http://www.jlogday.com/code/libmal/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Library encapsulating malsync

LICENSE=	MPL10
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libpisock.so:palm/pilot-link

USES=		gmake libtool
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-pilot-prefix=${LOCALBASE}
USE_LDCONFIG=	yes
CONFLICTS=	malsync-[0-9]*
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
