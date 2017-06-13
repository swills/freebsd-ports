# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-thread_safe1/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	thread_safe
PORTVERSION=	0.1.3
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	1

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Thread-safe collections and utilities for Ruby

LICENSE=	APACHE20

RUN_DEPENDS=	rubygem-atomic>=0:devel/rubygem-atomic

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

PORTSCOUT=	limit:^0\.1

.include <bsd.port.mk>
