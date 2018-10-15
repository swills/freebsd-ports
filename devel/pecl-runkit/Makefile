# Created by: Elias Mandouvalos <ocean@mail.gr>
# $FreeBSD: head/devel/pecl-runkit/Makefile 481545 2018-10-08 15:08:13Z antoine $

PORTNAME=	runkit
PORTVERSION=	1.0.4
PORTREVISION=	1
CATEGORIES=	devel pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PECL extension to modify constants, user-defined functions, and classes

LICENSE=	PHP30

USES=		php:pecl
IGNORE_WITH_PHP=	70 71 72 73

CONFIGURE_ARGS=	--enable-runkit=classkit

.include <bsd.port.mk>
