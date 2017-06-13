# Created by: kuriyama
# $FreeBSD: head/devel/p5-Carp-Datum/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Carp-Datum
PORTVERSION=	0.1.3
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Debugging And Tracing Ultimate Module

BUILD_DEPENDS=	p5-Log-Agent>=0:devel/p5-Log-Agent \
		p5-Getargs-Long>=0:devel/p5-Getargs-Long
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
