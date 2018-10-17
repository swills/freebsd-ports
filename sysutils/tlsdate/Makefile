# $FreeBSD: head/sysutils/tlsdate/Makefile 482230 2018-10-16 14:26:45Z sunpoet $

PORTNAME=	tlsdate
PORTVERSION=	0.0.13
DISTVERSIONPREFIX=	${PORTNAME}-
PORTREVISION=	2
CATEGORIES=	sysutils

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Secure parasitic rdate replacement

LICENSE=	BSD3CLAUSE

LIB_DEPENDS=	libevent.so:devel/libevent

OPTIONS_DEFINE=	DOCS

USES=		autoreconf libtool pkgconfig ssl

CFLAGS+=	-I${OPENSSLINC}
LDFLAGS+=	-L${OPENSSLLIB}
GNU_CONFIGURE=	yes
TEST_TARGET=	test

PLIST_SUB=	PKGNAME=${PKGNAME}
PORTDOCS=	*

USE_GITHUB=	yes
GH_ACCOUNT=	ioerror

.include <bsd.port.mk>
