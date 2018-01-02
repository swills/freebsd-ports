# $FreeBSD: head/net/libmaxminddb/Makefile 457328 2017-12-26 23:20:02Z sunpoet $

PORTNAME=	libmaxminddb
PORTVERSION=	1.3.1
CATEGORIES=	net
MASTER_SITES=	https://github.com/maxmind/libmaxminddb/releases/download/${PORTVERSION}/

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Library for the MaxMind DB file format used for GeoIP2

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-pkgconfigdir=${PREFIX}/libdata/pkgconfig
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes
USES=		gmake libtool

.include <bsd.port.mk>
