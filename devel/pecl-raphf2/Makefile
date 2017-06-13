# Created by: Muhammad Moinur Rahman<bofh@FreeBSD.org>
# $FreeBSD: head/devel/pecl-raphf2/Makefile 438175 2017-04-10 15:08:47Z mat $

PORTNAME=	raphf
PORTVERSION=	2.0.0
PORTREVISION=	1
CATEGORIES=	devel
PKGNAMESUFFIX=	2

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Resource and persistent handles factory

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

PORTSCOUT=	limit:^2.*

USES=		gmake php:pecl
IGNORE_WITH_PHP=	56
CONFLICTS=	pecl-raphf-1*

.include <bsd.port.mk>
