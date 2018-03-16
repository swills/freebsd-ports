# Created by: Lukasz Komsta
# $FreeBSD: head/security/seccure/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	seccure
PORTVERSION=	0.5
PORTREVISION=	5
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
