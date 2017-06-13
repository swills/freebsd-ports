# Created by: Thierry Thomas (<thierry@pompo.net>)
# $FreeBSD: head/mail/pecl-mailparse2/Makefile 440442 2017-05-08 17:21:49Z dbaio $

PORTNAME=	mailparse
PORTVERSION=	2.1.6
PORTREVISION=	1
CATEGORIES=	mail www
PKGNAMESUFFIX=	2

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	PECL extension to create and decode MIME messages

LICENSE=	PHP202

PORTSCOUT=	limit:^2.*

USES=		php:pecl
USE_PHP=	mbstring:build
IGNORE_WITH_PHP=	70 71

.include <bsd.port.mk>
