# Created by: Muhammad Moinur Rahman<bofh@FreeBSD.org>
# $FreeBSD: head/devel/pecl-propro2/Makefile 468150 2018-04-23 23:54:09Z bofh $

PORTNAME=	propro
PORTVERSION=	2.1.0
CATEGORIES=	devel

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Facility to manage extension object properties

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

IGNORE_WITH_PHP=	56
PORTSCOUT=	limit:^2.*

USES=		gmake php:pecl
CONFLICTS=	pecl-propro-1*

.include <bsd.port.mk>
