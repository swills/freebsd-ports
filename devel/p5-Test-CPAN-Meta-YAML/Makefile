# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/p5-Test-CPAN-Meta-YAML/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Test-CPAN-Meta-YAML
PORTVERSION=	0.25
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Validate a META.yml file within a CPAN distribution

LICENSE=	ART20

BUILD_DEPENDS=	p5-Test-YAML-Valid>=0.03:devel/p5-Test-YAML-Valid
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
