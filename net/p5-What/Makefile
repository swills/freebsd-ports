# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/net/p5-What/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	What
PORTVERSION=	1.01
PORTREVISION=	2
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:TPG
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Find out about running services

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Error>=0:lang/p5-Error \
		p5-Exception-Class>=1.21:devel/p5-Exception-Class
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Exception>=0:devel/p5-Test-Exception \
		p5-Test-Pod>=1:devel/p5-Test-Pod

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
