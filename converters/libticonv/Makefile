# $FreeBSD: head/converters/libticonv/Makefile 472056 2018-06-09 15:31:35Z danfe $

PORTNAME=	libticonv
PORTVERSION=	1.1.5
CATEGORIES=	converters
MASTER_SITES=	SF/tilp/tilp2-linux/tilp2-1.18

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	TI calculator character set library

LICENSE=	GPLv2

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-iconv
INSTALL_TARGET=	install-strip
USES=		autoreconf gmake iconv libtool pkgconfig tar:bzip2
USE_GNOME=	glib20
USE_LDCONFIG=	yes

.include <bsd.port.mk>
