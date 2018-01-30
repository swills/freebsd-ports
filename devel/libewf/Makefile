# Created by: MANTANI Nobutaka <nobutaka@FreeBSD.org>
# $FreeBSD: head/devel/libewf/Makefile 460291 2018-01-29 12:18:02Z antoine $

PORTNAME=	libewf
PORTVERSION=	20140803
CATEGORIES=	devel
MASTER_SITES=	https://github.com/libyal/libewf-legacy/releases/download/${PORTVERSION}/ \
		LOCAL/antoine

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Library for support of the Expert Witness Compression Format (EWF)

LICENSE=	LGPL3+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libsmdev.so:devel/libsmdev \
		libsmraw.so:devel/libsmraw \
		libuuid.so:misc/e2fsprogs-libuuid

USES=		fuse libtool pathfix pkgconfig python:2.7 ssl
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-python --with-libsmdev=${LOCALBASE} --with-libsmraw=${LOCALBASE} --with-libuuid=${LOCALBASE}
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=	NLS

NLS_USES=	gettext
NLS_CONFIGURE_ON=	--with-libintl-prefix=${LOCALBASE}
NLS_CONFIGURE_OFF=	--disable-nls

.include <bsd.port.mk>
