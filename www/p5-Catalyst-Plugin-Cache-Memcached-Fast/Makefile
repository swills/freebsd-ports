# Created by: Denis Pokataev <catone@cpan.org>
# $FreeBSD: head/www/p5-Catalyst-Plugin-Cache-Memcached-Fast/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	Catalyst-Plugin-Cache-Memcached-Fast
PORTVERSION=	0.14
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Catalyst Plugin for Cache::Memcached::Fast

BUILD_DEPENDS=	p5-Cache-Memcached-Fast>=0:databases/p5-Cache-Memcached-Fast \
		p5-Catalyst-Runtime>=0:www/p5-Catalyst-Runtime \
		p5-Class-Data-Inheritable>=0:devel/p5-Class-Data-Inheritable \
		p5-Test-Simple>=0:devel/p5-Test-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
