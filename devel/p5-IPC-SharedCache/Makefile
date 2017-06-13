# Created by: nork@cityfujisawa.ne.jp
# $FreeBSD: head/devel/p5-IPC-SharedCache/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	IPC-SharedCache
PORTVERSION=	1.3
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for managing a SysV IPC shared memory cache

BUILD_DEPENDS=	p5-IPC-ShareLite>=0:devel/p5-IPC-ShareLite

RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
