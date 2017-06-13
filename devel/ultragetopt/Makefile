# Created by: Timothy Beyer <beyert@cs.ucr.edu>
# $FreeBSD: head/devel/ultragetopt/Makefile 434587 2017-02-22 15:02:18Z bapt $

PORTNAME=	ultragetopt
PORTVERSION=	0.6.0
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	http://kevinlocke.name/programs/

MAINTAINER=	beyert@cs.ucr.edu
COMMENT=	Versatile and customizable implementation of getopt()

LICENSE=	MIT

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
MAKE_ARGS=	PREFIX="${PREFIX}"
USES=		libtool
USE_LDCONFIG=	yes

PLIST_FILES=	include/ultragetopt.h \
		lib/libultragetopt.a lib/libultragetopt.so \
		lib/libultragetopt.so.0 lib/libultragetopt.so.0.0.0

.include <bsd.port.mk>
