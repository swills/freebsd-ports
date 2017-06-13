# Created by: "Waitman Gobble" <uzimac@da3m0n8t3r.com>
# $FreeBSD: head/devel/libbson/Makefile 414506 2016-05-03 01:51:35Z junovitch $

PORTNAME=	libbson
PORTVERSION=	1.3.5
CATEGORIES=	devel

MAINTAINER=	ports@bsdserwis.com
COMMENT=	BSON utility library

LICENSE=	APACHE20

USE_GITHUB=	yes
GH_ACCOUNT=	mongodb

USES=		gmake pkgconfig autoreconf libtool
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes

pre-configure:
#	cd ${WRKSRC} && ./autogen.sh

MAKE_ARGS=	pkgconfigdir="${PREFIX}/libdata/pkgconfig"

.include <bsd.port.mk>
