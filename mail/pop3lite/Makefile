# Created by: George Reid <greid@ukug.uk.freebsd.org>
# $FreeBSD: head/mail/pop3lite/Makefile 405891 2016-01-12 16:20:31Z amdmi3 $

PORTNAME=	pop3lite
PORTVERSION=	0.2.4a
PORTREVISION=	5
CATEGORIES=	mail
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Flexible, modular RFC-compliant POP3 daemon

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-static
USES=		gmake libtool
USE_GNOME=	glib12
USE_LDCONFIG=	yes

INFO=		pop3lite-admin

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/pop3lite/*.so

.include <bsd.port.mk>
