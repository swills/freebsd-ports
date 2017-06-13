# Created by: ijliao
# $FreeBSD: head/devel/libruin/Makefile 426522 2016-11-19 18:19:29Z marino $

PORTNAME=	libruin
PORTVERSION=	0.1.4
PORTREVISION=	3
CATEGORIES=	devel scheme
MASTER_SITES=	SAVANNAH

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Renderer for User Interfaces in Ncurses

BUILD_DEPENDS=	${LOCALBASE}/share/guile/site/config/load.scm:devel/guile-lib
RUN_DEPENDS=	${LOCALBASE}/share/guile/site/config/load.scm:devel/guile-lib

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USES=		libtool ncurses
USE_LDCONFIG=	yes

INFO=	libruin

.include <bsd.port.mk>
