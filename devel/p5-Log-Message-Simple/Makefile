# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: head/devel/p5-Log-Message-Simple/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Log-Message-Simple
PORTVERSION=	0.10
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Provides standardized logging facilities using the Log::Message module

BUILD_DEPENDS=	p5-Log-Message>=0:devel/p5-Log-Message
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
