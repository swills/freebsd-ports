# Created by: Dmitry Sivachenko <demon@FreeBSD.org>
# $FreeBSD: head/devel/uatraits/Makefile 461885 2018-02-15 12:34:49Z mat $

PORTNAME=	uatraits
PORTVERSION=	20130430
PORTREVISION=	9
CATEGORIES=	devel www
MASTER_SITES=	http://people.freebsd.org/~demon/

MAINTAINER=	demon@FreeBSD.org
COMMENT=	User-Agent detection library

LIB_DEPENDS=	${PY_BOOST} \
		libpcre.so:devel/pcre \
		libxml2.so:textproc/libxml2

USES=		autoreconf libtool pkgconfig python:2.7 ssl
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

CONFIGURE_ARGS=	--with-boost-prefix=${LOCALBASE} \
		--with-pcre-prefix=${LOCALBASE} \
		--enable-python --disable-perl --disable-tests \
		--disable-java --disable-nodejs
CONFIGURE_ENV=	crypto_CFLAGS="-I${OPENSSLINC}" \
		crypto_LIBS="-L${OPENSSLLIB} -lcrypto"
CPPFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
