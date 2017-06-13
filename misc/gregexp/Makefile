# Created by: ijliao
# $FreeBSD: head/misc/gregexp/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	gregexp
PORTVERSION=	0.4
CATEGORIES=	misc
MASTER_SITES=	http://dentrassi.de/download/gregexp/${PORTVERSION}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Graphical regular expression explorer

LIB_DEPENDS=	libpcre.so:devel/pcre

USES=		pkgconfig
USE_GNOME=	gnomeprefix libgnomeui
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
