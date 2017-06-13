# Created by: Anes Mukhametov <anes@anes.su>
# $FreeBSD: head/devel/p5-MooseX-Role-Matcher/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	MooseX-Role-Matcher
PORTVERSION=	0.05
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	anes@anes.su
COMMENT=	Generic object matching based on attributes and methods

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-List-MoreUtils>=0:lang/p5-List-MoreUtils \
		p5-MooseX-Role-Parameterized>=0.03:devel/p5-MooseX-Role-Parameterized
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Deep>=0:devel/p5-Test-Deep

USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
