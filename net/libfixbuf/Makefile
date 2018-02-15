# Created by: David Thiel <lx@redundancy.redundancy.org>
# $FreeBSD: head/net/libfixbuf/Makefile 461805 2018-02-14 14:08:25Z antoine $

PORTNAME=	libfixbuf
PORTVERSION=	1.8.0
CATEGORIES=	net
MASTER_SITES=	http://tools.netsa.cert.org/releases/

MAINTAINER=	nacho319+freebsdZilla@gmail.com
COMMENT=	Library for using the IP Flow Information Export protocol

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USES=		libtool pathfix pkgconfig
USE_GNOME=	glib20
USE_LDCONFIG=	yes

.include <bsd.port.mk>
