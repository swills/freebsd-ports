# Created by: Anish Mistry <amistry@am-productions.biz>
# $FreeBSD: head/games/gdado/Makefile 465584 2018-03-26 12:38:56Z bapt $

PORTNAME=	gdado
PORTVERSION=	2.2
PORTREVISION=	8
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/souce%20code/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GTK2 dice roller

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes
USES=		gmake pkgconfig
USE_GNOME=	gnomeprefix gtk20 libgnomeui

post-patch:
	@${REINPLACE_CMD} "s|-O2|${CFLAGS}|" ${WRKSRC}/configure

.include <bsd.port.mk>
