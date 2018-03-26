# Created by: ijliao
# $FreeBSD: head/misc/gregexp/Makefile 465584 2018-03-26 12:38:56Z bapt $

PORTNAME=	gregexp
PORTVERSION=	0.4
PORTREVISION=	1
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
