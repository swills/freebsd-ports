# Created by: Alexander Logvinov <ports@logvinov.com>
# $FreeBSD: head/net-im/pidgin-fetion/Makefile 439367 2017-04-25 08:20:30Z riggs $

PORTNAME=	fetion
PORTVERSION=	0.98.5.2
PORTREVISION=	7
CATEGORIES=	net-im
MASTER_SITES=	http://www.logvinov.ru/files/dist/fetion/ \
		LOCAL/avl
PKGNAMEPREFIX=	pidgin-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Fetion protocol plugin for libpurple

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libpurple.so:net-im/libpurple

GNU_CONFIGURE=	yes
USES=		libtool pkgconfig tar:bzip2
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
INSTALL_TARGET=	install-strip

PLIST_FILES=	lib/purple-2/libfetion.so

.include <bsd.port.mk>
