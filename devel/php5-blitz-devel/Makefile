# Created by: Valery Komarov <komarov@valerka.net>
# $FreeBSD: head/devel/php5-blitz-devel/Makefile 481545 2018-10-08 15:08:13Z antoine $

PORTNAME=	blitz-devel
PORTVERSION=	0.7.2
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	http://alexeyrybak.com/blitz/
PKGNAMEPREFIX=	${PHP_PKGNAMEPREFIX}
DISTNAME=	blitz-${PORTVERSION}-devel

MAINTAINER=	komarov@valerka.net
COMMENT=	PHP templating engine

CONFLICTS=	php5-blitz-0.6*

USES=		php:ext
PHP_MODNAME=	blitz
IGNORE_WITH_PHP=	70 71 72 73

.include <bsd.port.mk>
