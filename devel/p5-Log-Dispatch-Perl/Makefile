# Created by: Lars Thegler <lars@thegler.dk>
# $FreeBSD: head/devel/p5-Log-Dispatch-Perl/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Log-Dispatch-Perl
PORTVERSION=	0.04
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Log::Dispatch plug-in using core Perl functions for logging

BUILD_DEPENDS=	p5-Log-Dispatch>=0:devel/p5-Log-Dispatch
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
