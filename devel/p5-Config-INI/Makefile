# $FreeBSD: head/devel/p5-Config-INI/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Config-INI
PORTVERSION=	0.025
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple .ini files emitter and parser for Perl

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Mixin-Linewise>=0.100:devel/p5-Mixin-Linewise
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
