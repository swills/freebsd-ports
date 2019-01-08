# Created by: Thomas Gellekum <tg@FreeBSD.org>
# $FreeBSD: head/mail/gnumail/Makefile 489394 2019-01-05 22:23:24Z swills $

PORTNAME=	gnumail
PORTVERSION=	1.3.0
CATEGORIES=	mail gnustep
MASTER_SITES=	SAVANNAH/gnustep-nonfsf/
DISTNAME=	GNUMail-${PORTVERSION}

MAINTAINER=	theraven@FreeBSD.org
COMMENT=	GNUstep mail client

LICENSE=	GPLv2

LIB_DEPENDS=	libPantomime.so:mail/pantomime \
		libAddresses.so:mail/addresses

USES=		cpe gnustep

CPE_VENDOR=	gnu
USE_GNUSTEP=	back build gui base
USE_LDCONFIG=	${GNUSTEP_SYSTEM_LIBRARIES}

.include <bsd.port.mk>
