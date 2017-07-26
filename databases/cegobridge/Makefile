# $FreeBSD: head/databases/cegobridge/Makefile 446372 2017-07-22 08:32:31Z pi $

PORTNAME=	cegobridge
PORTVERSION=	1.1.4
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
