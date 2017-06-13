# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: head/devel/p5-MooseX-Types-VariantTable/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	MooseX-Types-VariantTable
PORTVERSION=	0.04
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Type constraint based variant table

RUN_DEPENDS=	p5-MooseX-Types-Structured>=0.12:devel/p5-MooseX-Types-Structured \
		p5-MooseX-Clone>=0.03:devel/p5-MooseX-Clone
BUILD_DEPENDS:=	${RUN_DEPENDS}
TEST_DEPENDS=	p5-Test-Exception>=0:devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
