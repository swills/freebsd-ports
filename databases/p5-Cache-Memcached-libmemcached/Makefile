# Created by: Dmitry Liakh <dliakh@ukr.net>
# $FreeBSD: head/databases/p5-Cache-Memcached-libmemcached/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Cache-Memcached-libmemcached
PORTVERSION=	0.02011
PORTREVISION=	2
CATEGORIES=	databases
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DMAKI
PKGNAMEPREFIX=	p5-

MAINTAINER=	dliakh@ukr.net
COMMENT=	Cache::Memcached compatible interface to libmemcached

BUILD_DEPENDS=	p5-Memcached-libmemcached>=0.42.01:databases/p5-Memcached-libmemcached \
		p5-Task-Weaken>=0:devel/p5-Task-Weaken
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
