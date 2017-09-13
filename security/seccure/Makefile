# Created by: Lukasz Komsta
# $FreeBSD: head/security/seccure/Makefile 449591 2017-09-10 20:55:38Z gerald $

PORTNAME=	seccure
PORTVERSION=	0.5
PORTREVISION=	4
CATEGORIES=	security
MASTER_SITES=	http://point-at-infinity.org/seccure/ \
		NETBSD

MAINTAINER=	zi@FreeBSD.org
COMMENT=	Elliptic Curve Crypto Utility for Reliable Encryption

LICENSE=	LGPL3
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libgcrypt.so:security/libgcrypt

USE_GCC=	any

.include <bsd.port.mk>
