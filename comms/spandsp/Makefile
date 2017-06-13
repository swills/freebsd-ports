# Created by: wlloyd@slap.net
# $FreeBSD: head/comms/spandsp/Makefile 412344 2016-04-01 13:29:15Z mat $

PORTNAME=	spandsp
PORTVERSION=	0.0.6
CATEGORIES=	comms
MASTER_SITES=	http://www.soft-switch.org/downloads/spandsp/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	DSP library and software FAX machine

LICENSE=	LGPL21

LIB_DEPENDS=	libtiff.so:graphics/tiff

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USES=		autoreconf gmake libtool

CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib

USE_LDCONFIG=	yes

CONFLICTS=	spandsp-devel-[0-9]*

.include <bsd.port.mk>
