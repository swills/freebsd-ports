# Created by: Zach Thompson <lin-chi@lastamericanempire.com>
# $FreeBSD: head/databases/p5-POE-Component-EasyDBI/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	POE-Component-EasyDBI
PORTVERSION=	1.28
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POE Component for simplified DBI usage

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-DBI>=1.38:databases/p5-DBI \
		p5-POE>=0.3101:devel/p5-POE \
		p5-Params-Util>=0:devel/p5-Params-Util \
		p5-Try-Tiny>=0:lang/p5-Try-Tiny
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Requires>=0.08:devel/p5-Test-Requires

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
