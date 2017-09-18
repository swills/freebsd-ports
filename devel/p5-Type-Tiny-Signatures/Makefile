# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: head/devel/p5-Type-Tiny-Signatures/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Type-Tiny-Signatures
PORTVERSION=	0.06
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:AWNCORP
PKGNAMEPREFIX=	p5-

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Method/Function Signatures w/Type::Tiny Constraints

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Type-Tiny>=1.000005:devel/p5-Type-Tiny \
		p5-Function-Parameters>=1.0605:devel/p5-Function-Parameters
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
