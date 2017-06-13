# Created by: Philip M. Gollucci
# $FreeBSD: head/devel/p5-Const-Fast/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Const-Fast
PORTVERSION=	0.014
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:LEONT
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Facility for creating read-only scalars, arrays, and hashes

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS:=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Sub-Exporter>=0:devel/p5-Sub-Exporter \
		p5-Sub-Exporter-Progressive>=0.001007:devel/p5-Sub-Exporter-Progressive
TEST_DEPENDS=	p5-Test-Exception>=0.29:devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	modbuildtiny

.include <bsd.port.mk>
