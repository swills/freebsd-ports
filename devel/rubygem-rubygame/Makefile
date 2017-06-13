# Created by: ws	Christoph Kick
# $FreeBSD: head/devel/rubygem-rubygame/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	rubygame
PORTVERSION=	2.6.4
PORTREVISION=	7
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Game-development extension and library for the ruby language

LICENSE=	LGPL21

RUN_DEPENDS=	rubygem-ruby-sdl-ffi>=0.1.0:devel/rubygem-ruby-sdl-ffi

NO_ARCH=	yes

USE_RUBY=	yes
USES=		gem
USE_SDL=	gfx image mixer ttf

.include <bsd.port.mk>
