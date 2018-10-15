# Created by: Volodymyr Kostyrko <c.kworr@gmail.com>
# $FreeBSD: head/devel/pecl-scream/Makefile 481545 2018-10-08 15:08:13Z antoine $

PORTNAME=	scream
DISTVERSION=	0.1.0
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	c.kworr@gmail.com
COMMENT=	Break the silence operator

LICENSE=	PHP301

USES=		php:pecl
IGNORE_WITH_PHP=	70 71 72 73

test: build
	@(cd ${WRKSRC} && ${MAKE} test)

.include <bsd.port.mk>
