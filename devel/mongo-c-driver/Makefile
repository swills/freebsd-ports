# Created by: "Waitman Gobble" <uzimac@da3m0n8t3r.com>
# $FreeBSD: head/devel/mongo-c-driver/Makefile 451611 2017-10-09 13:28:52Z swills $

PORTNAME=	mongo-c-driver
PORTVERSION=	1.8.0
CATEGORIES=	devel

MAINTAINER=	ports@bsdserwis.com
COMMENT=	C Driver for MongoDB

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libsasl2.so:security/cyrus-sasl2 \
		libbson-1.0.so:devel/libbson

USE_GITHUB=	yes
GH_ACCOUNT=	mongodb

USES=		cmake:noninja pkgconfig
USE_LDCONFIG=	yes
LDFLAGS+=	-pthread

.include <bsd.port.mk>
