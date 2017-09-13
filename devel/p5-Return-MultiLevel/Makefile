# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: head/devel/p5-Return-MultiLevel/Makefile 449640 2017-09-11 13:16:19Z sunpoet $

PORTNAME=	Return-MultiLevel
PORTVERSION=	0.05
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MAUKE
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Return across multiple call levels

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Data-Munge>=0.07:devel/p5-Data-Munge \
		p5-Scope-Upper>=0.29:devel/p5-Scope-Upper
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Fatal>=0:devel/p5-Test-Fatal

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
