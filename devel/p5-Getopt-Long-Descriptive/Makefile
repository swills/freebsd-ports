# Created by: Lars Balker Rasmussen <lbr@FreeBSD.org>
# $FreeBSD: head/devel/p5-Getopt-Long-Descriptive/Makefile 476295 2018-08-03 13:40:42Z wen $

PORTNAME=	Getopt-Long-Descriptive
PORTVERSION=	0.103
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RJBS
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Getopt::Long with usage text

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Params-Validate>=0.97:devel/p5-Params-Validate \
		p5-Sub-Exporter>=0.972:devel/p5-Sub-Exporter
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Fatal>=0:devel/p5-Test-Fatal \
		p5-Test-Warnings>=0.005:devel/p5-Test-Warnings

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
