# $FreeBSD: head/net/libmdf/Makefile 453993 2017-11-11 19:18:42Z dbaio $

PORTNAME=	libmdf
PORTVERSION=	1.0.21
CATEGORIES=	net finance
MASTER_SITES=	https://packages.millistream.com/source/

MAINTAINER=	henrik.holst@millistream.com
COMMENT=	Millistream Data Feed API library

LICENSE=	LGPL3+
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes

USES=		libtool pkgconfig ssl
USE_LDCONFIG=	yes

CONFIGURE_ARGS=	--with-pkgconfigdir=${PREFIX}/libdata/pkgconfig

INSTALL_TARGET=	install-strip
TEST_TARGET=	check

.include <bsd.port.mk>
