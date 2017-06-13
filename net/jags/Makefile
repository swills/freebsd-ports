# Created by: Patrick Li <pat@databits.net>
# $FreeBSD: head/net/jags/Makefile 436925 2017-03-25 23:37:05Z antoine $

PORTNAME=	jags
PORTVERSION=	0.22.1
PORTREVISION=	9
CATEGORIES=	net
MASTER_SITES=	SF/${PORTNAME}/Jags/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	JAGS - Just Another GTK+ Samba Client

CONFLICTS=	jags-1.*

USES=		gmake samba:run # smbclient
USE_XORG=	xi xext x11
USE_GNOME=	gtk12
GNU_CONFIGURE=	yes

.include <bsd.port.mk>
