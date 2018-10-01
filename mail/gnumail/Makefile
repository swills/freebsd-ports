# Created by: Thomas Gellekum <tg@FreeBSD.org>
# $FreeBSD: head/mail/gnumail/Makefile 480741 2018-09-26 15:23:37Z brooks $

PORTNAME=	gnumail
PORTVERSION=	1.2.3
PORTREVISION=	2
CATEGORIES=	mail gnustep
MASTER_SITES=	SAVANNAH/gnustep-nonfsf/
DISTNAME=	GNUMail-${PORTVERSION}

MAINTAINER=	theraven@FreeBSD.org
COMMENT=	GNUstep mail client

LICENSE=	GPLv2

USES=		cpe gnustep
CPE_VENDOR=	gnu
USE_GNUSTEP=	back build
LIB_DEPENDS=	libPantomime.so:mail/pantomime \
		libAddresses.so:mail/addresses
USE_LDCONFIG=	${GNUSTEP_SYSTEM_LIBRARIES}

.include <bsd.port.mk>
