# $FreeBSD: head/security/starttls/Makefile 471191 2018-05-31 01:18:05Z jrm $

PORTNAME=	starttls
PORTVERSION=	0.10
PORTREVISION=	18
CATEGORIES=	security
MASTER_SITES=	ftp://ftp.opaopa.org/pub/elisp/
PKGNAMESUFFIX=	${EMACS_PKGNAMESUFFIX}

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Simple wrapper program for STARTTLS on ${EMACS_PORT_NAME}

USES=		emacs gmake ssl

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-openssl=${OPENSSLBASE}

.include <bsd.port.mk>
