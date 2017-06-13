# Created by: ijliao
# $FreeBSD: head/net/p5-Net-Gnats/Makefile 435855 2017-03-10 22:45:19Z sunpoet $

PORTNAME=	Net-Gnats
PORTVERSION=	0.22
CATEGORIES=	net databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl interface to GNU Gnats daemon

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-strictures>=0:devel/p5-strictures
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-MockObject>=0:devel/p5-Test-MockObject

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
