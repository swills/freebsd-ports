# Created by: Felippe de Meirelles Motta <lippemail@gmail.com>
# $FreeBSD: head/devel/p5-Test-YAML-Meta/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Test-YAML-Meta
PORTVERSION=	0.22
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Validation of the META.yml file in a distribution

LICENSE=	ART20

BUILD_DEPENDS=	p5-Test-YAML-Valid>=0:devel/p5-Test-YAML-Valid \
		p5-Test-CPAN-Meta-YAML>=0.17:devel/p5-Test-CPAN-Meta-YAML
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
