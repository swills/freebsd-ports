# Created by: Ying-Chieh Liao <ijliao@FreeBSD.org>
# $FreeBSD: head/security/crank/Makefile 428152 2016-12-08 19:52:19Z tijl $

PORTNAME=	crank
PORTVERSION=	0.2.1
PORTREVISION=	9
CATEGORIES=	security
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	CRyptANalysis toolKit

LIB_DEPENDS=	libguile.so:lang/guile

USE_GNOME=	gtk12
GNU_CONFIGURE=	yes
GUILE_CONFIG=	${LOCALBASE}/bin/guile-config
LDFLAGS+=	`${GUILE_CONFIG} link`
CFLAGS+=	`${GUILE_CONFIG} compile`

INFO=		crank

.include <bsd.port.mk>
