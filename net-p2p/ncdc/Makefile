# Created by: Dmitriy Limonov
# $FreeBSD: head/net-p2p/ncdc/Makefile 490211 2019-01-13 20:58:36Z adamw $

PORTNAME=	ncdc
PORTVERSION=	1.20
PORTREVISION=	1
CATEGORIES=	net-p2p
MASTER_SITES=	http://dev.yorhel.nl/download/

MAINTAINER=	earl1k@mail.ru
COMMENT=	Lightweight direct connect client with ncurses interface

LICENSE=	MIT

LIB_DEPENDS=	libsqlite3.so:databases/sqlite3 \
		libpcre.so:devel/pcre \
		libgmp.so:math/gmp \
		libgnutls.so:security/gnutls \
		libgcrypt.so:security/libgcrypt \
		libnettle.so:security/nettle \
		libp11-kit.so:security/p11-kit

USES=		gmake pkgconfig ncurses
USE_GNOME=	glib20
GNU_CONFIGURE=	yes
PLIST_FILES=	bin/ncdc \
		man/man1/ncdc.1.gz

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
