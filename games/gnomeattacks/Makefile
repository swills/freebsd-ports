# Created by: Adam Weinberger <adamw@FreeBSD.org>
# $FreeBSD: head/games/gnomeattacks/Makefile 465584 2018-03-26 12:38:56Z bapt $

PORTNAME=	gnomeattacks
PORTVERSION=	0.3
PORTREVISION=	15
CATEGORIES=	games gnome
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GNOME 2 game featuring a bizarre flying GNOME logo

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes
USES=		pathfix gmake pkgconfig
USE_GNOME=	gnomeprefix gnomevfs2 libgnomeui
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib -lm

.include <bsd.port.mk>
