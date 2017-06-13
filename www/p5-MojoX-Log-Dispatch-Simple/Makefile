# Created by: Tomohiro Hosaka <bokutin@bokut.in>
# $FreeBSD: head/www/p5-MojoX-Log-Dispatch-Simple/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	MojoX-Log-Dispatch-Simple
PORTVERSION=	1.03
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bokutin@bokut.in
COMMENT=	Simple Log::Dispatch replacement of Mojo::Log

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Log-Dispatch>=0:devel/p5-Log-Dispatch \
		p5-Mojolicious>=0:www/p5-Mojolicious
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
