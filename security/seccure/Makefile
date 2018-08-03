# Created by: Lukasz Komsta
# $FreeBSD: head/security/seccure/Makefile 475857 2018-07-29 22:18:44Z gerald $

PORTNAME=	seccure
PORTVERSION=	0.5
PORTREVISION=	6
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
