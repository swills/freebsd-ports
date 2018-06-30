# Created by: Wei-chun Chao
# $FreeBSD: head/net-mgmt/p5-Net-Netmask/Makefile 473267 2018-06-24 20:20:50Z sunpoet $

PORTNAME=	Net-Netmask
PORTVERSION=	1.9103
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module to parse, manipulate, and lookup IP network blocks

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

TEST_DEPENDS=	p5-Test-UseAllModules>=0:devel/p5-Test-UseAllModules \
		p5-Test2-Suite>=0:devel/p5-Test2-Suite

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
