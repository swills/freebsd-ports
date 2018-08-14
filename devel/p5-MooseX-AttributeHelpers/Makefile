# Created by: Lars Balker Rasmussen <lbr@FreeBSD.org>
# $FreeBSD: head/devel/p5-MooseX-AttributeHelpers/Makefile 476978 2018-08-12 08:06:23Z antoine $

PORTNAME=	MooseX-AttributeHelpers
PORTVERSION=	0.25
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Extend your attribute interfaces

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Moose>=0.56:devel/p5-Moose
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Exception>=0:devel/p5-Test-Exception

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	modbuildtiny

.include <bsd.port.mk>
