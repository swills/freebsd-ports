# Created by: Thierry Thomas (<thierry@pompo.net>)
# $FreeBSD: head/mail/pecl-mailparse2/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	mailparse
PORTVERSION=	2.1.6
PORTREVISION=	1
CATEGORIES=	mail www

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	PECL extension to create and decode MIME messages

LICENSE=	PHP202

PORTSCOUT=	limit:^2.*

USES=		php:pecl
USE_PHP=	mbstring:build
IGNORE_WITH_PHP=	70 71 72

.include <bsd.port.mk>
