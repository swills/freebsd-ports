# Created by: Adam Weinberger <adamw@FreeBSD.org>
# $FreeBSD: head/sysutils/tmux-mem-cpu-load/Makefile 472706 2018-06-18 19:03:03Z linimon $

PORTNAME=	tmux-mem-cpu-load
PORTVERSION=	3.4.0
DISTVERSIONPREFIX=	v
CATEGORIES=	sysutils

MAINTAINER=	adamw@FreeBSD.org
COMMENT=	CPU, RAM, and load monitor for use with tmux

LICENSE=	APACHE20

RUN_DEPENDS=	tmux:sysutils/tmux

USES=		cmake compiler:c++11-lang
USE_GITHUB=	yes
GH_ACCOUNT=	thewtex

PLIST_FILES=	bin/tmux-mem-cpu-load

.include <bsd.port.mk>
