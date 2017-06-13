# Created by: Thomas Gellekum <tg@FreeBSD.org>
# $FreeBSD: head/mail/gnumail/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	gnumail
PORTVERSION=	1.2.2
PORTREVISION=	2
CATEGORIES=	mail gnustep
MASTER_SITES=	http://download.gna.org/gnustep-nonfsf/
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
