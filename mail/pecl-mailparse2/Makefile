# Created by: Thierry Thomas (<thierry@pompo.net>)
# $FreeBSD: head/mail/pecl-mailparse2/Makefile 481545 2018-10-08 15:08:13Z antoine $

PORTNAME=	mailparse
PORTVERSION=	2.1.6
PORTREVISION=	1
CATEGORIES=	mail www

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	PECL extension to create and decode MIME messages

LICENSE=	PHP202

USES=		php:pecl
USE_PHP=	mbstring:build
IGNORE_WITH_PHP=	70 71 72 73

PORTSCOUT=	limit:^2.*

.include <bsd.port.mk>
