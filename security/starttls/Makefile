# $FreeBSD: head/security/starttls/Makefile 449697 2017-09-12 15:38:56Z ashish $

PORTNAME=	starttls
PORTVERSION=	0.10
PORTREVISION=	16
CATEGORIES=	security
MASTER_SITES=	ftp://ftp.opaopa.org/pub/elisp/

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Simple wrapper program for STARTTLS on ${EMACS_PORT_NAME}

GNU_CONFIGURE=	yes
USES=		gmake ssl
USE_EMACS=	yes
CONFIGURE_ARGS=	--with-openssl=${OPENSSLBASE}

.include <bsd.port.mk>
