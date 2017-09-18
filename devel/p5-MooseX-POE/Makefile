# Created by: Lars Balker Rasmussen <lbr@FreeBSD.org>
# $FreeBSD: head/devel/p5-MooseX-POE/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	MooseX-POE
PORTVERSION=	0.215
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	The Illicit Love Child of Moose and POE

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Moose>=2.0002:devel/p5-Moose \
		p5-POE>=1.310:devel/p5-POE
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-MooseX-Declare>=0:devel/p5-MooseX-Declare \
		p5-Test-Fatal>=0.003:devel/p5-Test-Fatal

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
