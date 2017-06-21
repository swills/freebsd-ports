# Created by: Mons Anderson <mons@cpan.org>
# $FreeBSD: head/devel/p5-uni-perl/Makefile 443807 2017-06-18 05:51:34Z sunpoet $

PORTNAME=	uni-perl
PORTVERSION=	0.91
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MONS
PKGNAMEPREFIX=	p5-

MAINTAINER=	mons@cpan.org
COMMENT=	Modern perl with Unicode

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-lib-abs>=0.90:devel/p5-lib-abs
BUILD_DEPENDS:=	${RUN_DEPENDS}
TEST_DEPENDS=	p5-Test-NoWarnings>=0:devel/p5-Test-NoWarnings

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
