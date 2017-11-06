# $FreeBSD: head/databases/cegobridge/Makefile 453310 2017-11-01 17:42:34Z pi $

PORTNAME=	cegobridge
PORTVERSION=	1.1.6
CATEGORIES=	databases
MASTER_SITES=	http://www.lemke-it.com/

MAINTAINER=	pi@FreeBSD.org
COMMENT=	Imports non-cego database dump files into cego

LIB_DEPENDS=	liblfcbase.so:devel/lfcbase \
		liblfcxml.so:devel/lfcxml \
		libcego.so:databases/cego

LICENSE=	GPLv3
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
USE_LDCONFIG=	yes
PLIST_FILES=	bin/cegobridge

.include <bsd.port.mk>
