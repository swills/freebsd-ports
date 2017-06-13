# Created by: Leo Vandewoestijne <freebsd@dns-lab.com>
# $FreeBSD: head/devel/fstrm/Makefile 439675 2017-04-28 21:01:28Z truckman $

PORTNAME=		fstrm
PORTVERSION=		0.3.2
DISTVERSIONPREFIX=	v
CATEGORIES=		devel

MAINTAINER=		freebsd@dns-lab.com
COMMENT=		Implementation of the Frame Streams data transport protocol in C

LICENSE=		APACHE20
LICENSE_FILE=		${WRKSRC}/LICENSE

LIB_DEPENDS=		libevent.so:devel/libevent

USE_GITHUB=		yes
GH_ACCOUNT=		farsightsec

GNU_CONFIGURE=		yes
USES=			autoreconf gmake libtool pkgconfig
USE_LDCONFIG=		yes
INSTALL_TARGET=		install-strip
TEST_TARGET=		check

OPTIONS_DEFINE=		DOXYGEN
DOXYGEN_DESC=		Use doxygen for docs
DOXYGEN_BUILD_DEPENDS=	doxygen:devel/doxygen
DOXYGEN_ALL_TARGET=	html-local

PORTDOCS=		*

.include <bsd.port.mk>
