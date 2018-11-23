# Created by: David Thiel <lx@redundancy.redundancy.org>
# $FreeBSD: head/net/libfixbuf/Makefile 485327 2018-11-19 15:57:08Z swills $

PORTNAME=	libfixbuf
PORTVERSION=	2.1.0
CATEGORIES=	net
MASTER_SITES=	http://tools.netsa.cert.org/releases/

MAINTAINER=	nacho319+freebsdZilla@gmail.com
COMMENT=	Library for using the IP Flow Information Export protocol

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USES=		libtool pathfix perl5 pkgconfig
USE_GNOME=	glib20
USE_PERL5=	build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
