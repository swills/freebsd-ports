# Created by: UMENO Takashi <umeno@rr.iij4u.or.jp>
# $FreeBSD: head/games/gnomekiss/Makefile 465584 2018-03-26 12:38:56Z bapt $

PORTNAME=	gnomekiss
PORTVERSION=	2.0
PORTREVISION=	9
CATEGORIES=	games gnome
MASTER_SITES=	http://devel.tlrmx.org/kiss/source/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GNOME version of Kisekae Set System

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	lha:archivers/lha

USES=		gettext-tools pathfix pkgconfig
USE_GNOME=	gnomeprefix libgnomeui
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
