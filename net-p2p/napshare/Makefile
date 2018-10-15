# Created by: Mike Heffner <mikeh@FreeBSD.org>
# $FreeBSD: head/net-p2p/napshare/Makefile 481888 2018-10-12 09:19:04Z antoine $

PORTNAME=	napshare
PORTVERSION=	1.3
PORTREVISION=	3
CATEGORIES=	net-p2p
MASTER_SITES=	SF/${PORTNAME}/NapShare%20V${PORTVERSION}/Linux

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GTK based Gnutella client

DEPRECATED=	Uses obsolete glib12
EXPIRATION_DATE=	2018-12-20

USES=		gmake
USE_GNOME=	gtk12
GNU_CONFIGURE=	yes

.include <bsd.port.mk>
