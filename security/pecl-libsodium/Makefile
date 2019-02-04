# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: head/security/pecl-libsodium/Makefile 492001 2019-02-02 21:55:15Z sunpoet $

PORTNAME=	libsodium
PORTVERSION=	1.0.7
CATEGORIES=	security

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	PHP wrapper for the Sodium cryptographic library

LICENSE=	BSD2CLAUSE

LIB_DEPENDS=	libsodium.so:security/libsodium

USES=		php:pecl

PORTSCOUT=	limit:^1\.

.include <bsd.port.mk>
