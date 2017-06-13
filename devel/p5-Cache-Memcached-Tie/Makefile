# Created by: Andrey Kostenko <andrey@kostenko.name>
# $FreeBSD: head/devel/p5-Cache-Memcached-Tie/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Cache-Memcached-Tie
PORTVERSION=	0.09
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Use Cache::Memcached::Fast like hash

BUILD_DEPENDS=	p5-Cache-Memcached-Fast>=0:databases/p5-Cache-Memcached-Fast
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
