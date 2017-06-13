# Created by: Sergey Skvortsov <skv@FreeBSD.org>
# $FreeBSD: head/devel/p5-POE-Component-Logger/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	POE-Component-Logger
PORTVERSION=	1.10
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POE logging class

BUILD_DEPENDS=	p5-POE>=1.293:devel/p5-POE \
		p5-Log-Dispatch>=2.26:devel/p5-Log-Dispatch \
		p5-Log-Dispatch-Config>=1.03:devel/p5-Log-Dispatch-Config
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-NoWarnings>=0:devel/p5-Test-NoWarnings

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
