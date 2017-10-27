# Created by: "Waitman Gobble" <uzimac@da3m0n8t3r.com>
# $FreeBSD: head/devel/mongo-c-driver/Makefile 452887 2017-10-25 18:29:45Z sunpoet $

PORTNAME=	mongo-c-driver
PORTVERSION=	1.8.1
CATEGORIES=	devel

MAINTAINER=	ports@bsdserwis.com
COMMENT=	C Driver for MongoDB

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libsasl2.so:security/cyrus-sasl2 \
		libbson-1.0.so:devel/libbson

USE_GITHUB=	yes
GH_ACCOUNT=	mongodb

USES=		cmake:outsource pkgconfig
#USES=		cmake:noninja pkgconfig
USE_LDCONFIG=	yes
LDFLAGS+=	-pthread

.include <bsd.port.mk>
